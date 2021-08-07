//stack是一种先进后出(First In Last Out, FILO)的数据结构 他只有一个出口
//不允许遍历操作 
//可以用empty判断容器是否为空
//可以用size返回容器元素个数

#include<iostream>
#include<stack>
using namespace std;

//常用接口
//构造函数：
// - stack<T> stk; 默认构造
// - stack(const stack& stk) 拷贝构造
//赋值操作:
// - stack& operator=(const stack& stk); 重载等号操作符
//数据存取：
// - push(elem); 想栈顶添加元素
// - pop(); 从栈顶移除第一个元素
// - top(); 返回栈顶元素
//大小操作:
// - empty(); 判断栈是否为空
// - size(); 返回栈的大小

void test01()
{
	stack<int> s;
	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "栈的大小： " << s.size() << endl;

	//只要栈不为空 查看栈顶 并执行出栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;
		//出栈
		s.pop();
	}
	cout << "栈的大小： " << s.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}