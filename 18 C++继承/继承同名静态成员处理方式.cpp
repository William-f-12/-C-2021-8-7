#include<iostream>
using namespace std;

//��̬��Ա�ͷǾ�̬��Ա����ͬ�� ����ʽһ��
//��������ͬ����Ա ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա ��Ҫ��������

class father
{
public:
	static int m_A;

	static void func()
	{
		cout << "father - static void func()����" << endl;
	}
};
int father::m_A = 100;

class son01 :public father
{
public:
	static int m_A;

	static void func()
	{
		cout << "son01 - static void func()����" << endl;
	}
};
int son01::m_A = 200;

void test5()
{
	//ͬ����̬����
	//1. ͨ���������
	son01 s;
	cout << "ͨ���������" << endl;
	cout << " son01 ��m_A = " << s.m_A << endl;
	cout << " father ��m_A = " << s.father::m_A << endl;

	//2. ͨ����������
	cout << "ͨ����������" << endl;
	cout << " son01 ��m_A = " << son01::m_A << endl;
	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ�����������
	cout << " father ��m_A = " << son01::father::m_A << endl;


	//ͬ����̬����
	//1. ͨ����������
	cout << "ͨ���������" << endl;
	s.func();
	s.father::func();

	//2. ͨ����������
	cout << "ͨ����������" << endl;
	son01::func();
	son01::father::func();
}

int main6()
{
	test5();

	system("pause");
	return 0;
}