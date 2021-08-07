//queue是一种先进先出(First in First Out, FIFO)的数据结构 他有两个出口
//不允许遍历
//只有队头和队尾能被外界访问

#include<iostream>
#include<queue>
#include<string>
using namespace std;

//对外常用接口
//构造函数:
// - queue<T> que;
// - queue(const queue& que);
//赋值操作:
// - queue& operator=(const queue& que);
//数据存取:
// - push(elem); 往队尾添加元素
// - pop(); 从队头移除第一个元素
// - back(); 返回最后一个元素
// - front(); 返回第一个元素
//大小操作：
// - empty(); 判断容器是否为空
// - size(); 返回队列大小

class Person
{
public:
	string m_name;
	int m_age;

	Person(int age, string name)
	{
		this->m_age = age;
		this->m_name = name;
	}
};

void test01()
{
	//创建队列
	queue<Person> q;

	//准备数据
	Person p1(30, "唐僧");
	Person p2(1200, "小猪");
	Person p3(1000, "小孙");

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	cout << "队列大小： " << q.size() << endl;

	//只要队列不为空 查看队头 查看队尾 出队
	while (!q.empty())
	{
		//查看队头
		cout << "队头- 姓名: " << q.front().m_name << " 年龄: " << q.front().m_age << endl;

		//查看队尾
		cout << "队尾- 姓名: " << q.back().m_name << " 年龄: " << q.back().m_age << endl;

		//出队
		q.pop();
	}
	cout << "队列大小： " << q.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}