#include<iostream>
using namespace std;

//C++�п����������ʱ��

class Person3
{
public:
	int m_Age;
	Person3()
	{
		cout << "Person3Ĭ�Ϲ��캯������" << endl;
	}
	Person3(int age)
	{
		m_Age = age;
		cout << "Person3�вι��캯������" << endl;
	}
	Person3(const Person3& p)
	{
		m_Age = p.m_Age;
		cout << "Person3�������캯������" << endl;
	}

	~Person3()
	{
		cout << "Person3������������" << endl;
	}
};

//C++�п����������ʱ��ͨ�����������
// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1()
{	
	Person3 p1(20);
	Person3 p2(p1);
	cout << "p2��������" << p2.m_Age << endl;
}

// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person3 p)
{

}

void test2()
{
	Person3 p;
	doWork(p);
}

// 3. ��ֵ��ʽ���ؾֲ�����
Person3 doWork2()
{
	Person3 p1;
	return p1;
}

void test3()
{
	Person3 p = doWork2();
}

int main3()
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}