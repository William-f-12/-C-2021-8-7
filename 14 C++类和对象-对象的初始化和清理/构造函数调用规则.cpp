#include<iostream>
using namespace std;

//Ĭ������� C++���������ٸ�һ���������������
// 1. Ĭ�Ϲ��캯�����޲� ������Ϊ�գ�
// 2. Ĭ�������������޲� ������Ϊ�գ�
// 3. Ĭ�Ͽ������캯�� �����Խ���ֵ����

//���캯�����ù������£�
//����û������вι��캯�� c++�����ṩĬ���޲ι��� �����ṩĬ�Ͽ�������
//����û����忽�����캯�� c++�������ṩ�������캯��

class Person4
{
public:
	int m_Age;

	Person4()
	{
		cout << "Person4��Ĭ�Ϲ��캯������" << endl;
	}
	Person4(int age)
	{
		m_Age = age;
		cout << "Person4���вι��캯������" << endl;
	}
	//Person4(const Person4& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "Person4�Ŀ������캯������" << endl;
	//}

	~Person4()
	{
		cout << "Person4��������������" << endl;
	}
};

void test_()
{
	Person4 p;
	p.m_Age = 18;

	Person4 p2(p);
	cout << "p2������Ϊ" << p2.m_Age << endl;
}

int main4()
{
	test_();

	system("pause");
	return 0;
}