#include<iostream>
using namespace std;

//��̬��Ա��Ϊ 
//��̬��Ա������
// ���Զ�����һ������
// �ڱ���׶η����ڴ�
// �������� �����ʼ��

//��̬��Ա����
// ���ж�����һ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	static int m_A; //��̬��Ա����
	int m_B; // �Ǿ�̬��Ա����

	static void func()
	{
		m_A = 100; //��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200; �����Է��ʷǾ�̬��Ա���� �޷����ֵ������ĸ����������
		cout << "static void func����" << endl;
	}
	//��̬��Ա����Ҳ�з���Ȩ��
};

int Person::m_A = 0;

//�����ַ��ʷ�ʽ
void test_3()
{
	//1. ͨ���������
	Person p;
	p.func();

	//2. ͨ����������
	Person::func();
}

int main()
{
	test_3();

	system("pause");
	return 0;
}