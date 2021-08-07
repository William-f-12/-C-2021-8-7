#include<iostream>
#include<deque>
using namespace std;

// - deque.empty() 判断容器是否为空
// - deque.size() 返回容器中元素个数
// - deque.resize(num) 同vector
// - deque.resize(num, elem) 同vector

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);
	if (d1.empty()) {
		cout << "d1为空" << endl;
	}
	else {
		cout << "d1不为空" << endl;
		cout << "d1的大小为" << d1.size() << endl;
		//deque容器没有容量概念
	}

	//重新指定大小
	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}