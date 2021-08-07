#include<iostream>
#include<list>
using namespace std;

//函数原型：
// - size();
// - empty();
// - resize(num);
// - resize(num, elem);

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	if (l1.empty())
	{
		cout << "l1为空" << endl;
	}
	else
	{
		cout << "l1不为空" << endl;
		cout << "l1的元素个数： " << l1.size() << endl;
	}

	//重新指定大小
	l1.resize(10, 123);
	printList(l1);

	l1.resize(2);
	printList(l1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}