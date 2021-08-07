#include<iostream>
#include<string>
using namespace std;

//��ģ���������������
//һ�������ִ�������
 
//��ģ��
template<class T1, class T2>
class Human
{
public:
	Human(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showHuman()
	{
		cout << "name: " << this->m_Name << endl;
		cout << "age: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

// 1. ָ����������� - ֱ����ʾ�������������
void printPerson1(Human<string, int> &h)
{
	h.showHuman();
}

void test1()
{
	Human<string, int> h("Tom", 19);
	printPerson1(h);
}

// 2. ����ģ�廯 - �������еĲ�����Ϊģ����д���
template<typename T1, typename T2>
void printPerson2(Human<T1, T2> &h)
{
	h.showHuman();
	cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
	cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
}

void test2()
{
	Human<string, int> h("Jerry", 29);
	printPerson2(h);
}

// 3. ������ģ�廯 - ������������� ģ�廯���д���
template<typename T>
void printPerson3(T &h)
{
	h.showHuman();
	cout << "T����������Ϊ�� " << typeid(T).name() << endl;
}

void test3()
{
	Human<string, int> h("Jeck", 17);
	printPerson3(h);
}

int main4()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}