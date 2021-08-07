//deque: 双端数组 可对头端进行插入删除操作
//deque与vector区别：
// vector对于头部插入删除效率低 数据量越大 效率越低
// deque相对而言 对头部的插入删除速度比vector快
// vector访问元素时的速度会比deque快 这和两者内部实现有关
//deque 由中控器和缓冲区构成
//deque也支持随机访问

#include<iostream>
#include<deque>
using namespace std;

//构造函数的函数原型：
// - deque<T> deqT; 默认构造形式
// - deque(beg, end); 将[beg, end]区间的元素拷贝给本身
// - deque(n, elem); 构造函数将n个elem拷贝给本身
// - deque(const deque& deq) 拷贝构造函数

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//默认构造
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	//区间方式
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	//第三种方式
	deque<int> d3(10, 100);
	printDeque(d3);

	//拷贝构造
	deque<int> d4(d3);
	printDeque(d4);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}