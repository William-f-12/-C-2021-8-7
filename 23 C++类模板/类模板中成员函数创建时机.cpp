#include<iostream>
using namespace std;

//��ģ���еĳ�Ա��������ͨ���еĳ�Ա��������ʱ�����������
// 1. ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
// 2. ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class myClass
{
public:
	T obj;

	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

int main3()
{
	myClass<Person1> m;
	m.func1();
	//m.func2();

	system("pause");
	return 0;
}