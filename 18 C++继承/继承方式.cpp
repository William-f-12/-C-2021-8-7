#include<iostream>
using namespace std;

//�̳з�ʽһ�������֣�
//�����̳�
//�����̳�
//˽�м̳�

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son1 : public Base //�����̳�
{
public:
	void func()
	{
		m_A = 10; //�����й���Ȩ�޳�Ա ��������Ȼ�� ����Ȩ��
		m_B = 10; //�����б���Ȩ�޳�Ա ��������Ȼ�� ����Ȩ��
		//m_C = 10; ������˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test01()
{
	son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; ��son1�� m_B�Ǳ���Ȩ�� ������ʲ���
}

class son2 :protected Base //�����̳�
{
public:
	void func()
	{
		m_A = 10; //�����й���Ȩ�޳�Ա �����б�� ����Ȩ��
		m_B = 10; //�����б���Ȩ�޳�Ա ��������Ȼ�� ����Ȩ��
		//m_C = 10; ������˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test02()
{
	son2 s2;
	//s2.m_A = 100; ��son2�� m_B�Ǳ���Ȩ�� ������ʲ���
	//s2.m_B = 100; ��son2�� m_B�Ǳ���Ȩ�� ������ʲ���
}

class son3 :private Base
{
public:
	void func()
	{
		m_A = 10; //�����й���Ȩ�޳�Ա �����б�� ˽��Ȩ��
		m_B = 10; //�����б���Ȩ�޳�Ա �����б�� ˽��Ȩ��
		//m_C = 10; ������˽��Ȩ�޳�Ա ������ʲ���
	}
};

class grandson3 :public son3
{
public:
	void func()
	{
		//m_A = 1001; ͨ��˽�м̳� ����son3�� m_A��m_B����Ϊ˽��Ȩ�޳�Ա
		//m_B = 1001; ���ʲ���
	}
};

void test03()
{
	son3 s3;
	//s3.m_A = 100; ��son3�� m_B��˽��Ȩ�� ������ʲ���
	//s3.m_B = 100; ��son3�� m_B��˽��Ȩ�� ������ʲ���
}

int main2()
{
	cout << "������" << endl;

	system("pause");
	return 0;
}