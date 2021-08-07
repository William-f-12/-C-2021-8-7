#include<iostream>
#include<set>
using namespace std;

//函数原型
// - size();
// - empty();
// - swap(st);

template<typename T>
void printSet(const set<T>& s)
{
	for (typename set<T>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);

	if (s1.empty()) {
		cout << "s1 为空" << endl;
	}
	else {
		cout << "s1 不为空" << endl;
		cout << "size: " << s1.size() << endl;
	}
	//交换
	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);

	s1.swap(s2);
	cout << "交换后：" << endl;
	printSet(s1);
	printSet(s2);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}