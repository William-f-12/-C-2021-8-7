#include<iostream>
using namespace std;

//������
//��Ա������const�����ǳ��������Ϊ������
//�������ڲ����޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable�� �ڳ���������Ȼ�����޸�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����

class Person2
{
public:

	//thisָ��ı�����ָ�볣�� ָ�򲻿ɸģ�Person* const this
	void showPerson() const //������: �޸�Ϊ const Person* const this ���Բ����޸ĳ�Ա����
	{
		//this->m_A = 100;
		this->m_B = 10;
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B; //������� ��ʹ�ڳ�������Ҳ�����޸� ���Ϲؼ���mutable
};

void test0()
{
	Person2 p;
	p.showPerson();
}

void test00()
{
	const Person2 p; //�ڶ���ǰ����const ��Ϊ������
	//p.m_A = 100;
	p.m_B = 100; //m_B�������ֵ �ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	//p.func(); ���� ��Ϊ��ͨ���������޸���ͨ��Ա���� ���������������޸����� ���Գ������ܵ�����ͨ����
	p.showPerson(); //������ֻ�ܵ��ó�����
}

int main()
{
	test0();
	test00();

	system("pause");
	return 0;
}