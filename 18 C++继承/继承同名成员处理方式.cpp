#include<iostream>
using namespace std;

//����������ͬ����Ա ֱ�ӷ��ʼ���
//���ʸ�����ͬ����Ա ��Ҫ��������

class Father
{
public:
	int m_A;

	Father()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Father - func()����" << endl;
	}
	void func(int a)
	{
		cout << "Father - func(int a)����" << endl;
	}
};

class Son_ :public Father
{
public:
	int m_A;

	Son_()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son_ - func()����" << endl;
	}
};

void test4()
{
	Son_ s;

	//ͬ����Ա����
	cout << "son_   �е�m_A: " << s.m_A << endl;
	cout << "Father �е�m_A: " << s.Father::m_A << endl;

	//ͬ����Ա����
	s.func(); //�����еĺ���
	s.Father::func(); //�����еĺ���

	//��������г��ֺ͸���ͬ���ĳ�Ա���� �����ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ������б����ص�ͬ����Ա���� ��Ҫ��������
	s.Father::func(100);
}

int main5()
{
	test4();

	system("pause");
	return 0;
}