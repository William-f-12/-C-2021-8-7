#include<iostream>
using namespace std;

//�Ӻ����������
//�����е���������ж��� ��������һ�ֹ��� ����Ӧ��ͬ����������

class Person
{
public:
	int m_A;
	int m_B;

	////1. ��Ա��������+��
	//Person operator+(Person& p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};

//2. ȫ�ֺ�������+��
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//��������� Ҳ���Է�����������
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

//���õ��������͵ı��ʽ��������ǲ��ɸ��ĵ�
//��Ҫ�������������

int main1()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	Person p3 = p1 + p2;
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	Person p4 = p3 + 100;
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;

	system("pause");
	return 0;
}