#include<iostream>
using namespace std;

//C++�ṩ�˳�ʼ���б��﷨������ʼ������
//�﷨�����캯��(): ����1(ֵ1), ����2(ֵ2) ... {}

class Person6
{
public:
	int m_A;
	int m_B;
	int m_C;

	////��ͳ��ʼ������
	//Person6(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//��ʼ���б��ʼ������
	Person6(int a, int b, int c): m_A(a), m_B(b), m_C(c) {}
};

void test_01()
{
	//Person6 p(10, 20, 30);
	Person6 p(30, 20, 10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main6()
{
	test_01();

	system("pause");
	return 0;
}