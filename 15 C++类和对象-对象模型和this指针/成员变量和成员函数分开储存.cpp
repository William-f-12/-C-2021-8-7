#include<iostream>
using namespace std;

//��C++�� ���ڵĳ�Ա�����ͳ�Ա�����ֿ�����
//ֻ�зǾ�̬�ĳ�Ա������������Ķ���

class C1
{
	int m_A; //�Ǿ�̬��Ա���� �����������
	static int m_B; //��̬��Ա���� �������������
	void func() {} //�Ǿ�̬��Ա���� �������������
	static void func2() {} //��̬��Ա���� �������������
};
int C1::m_B = 0;

void test01()
{
	C1 p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ� ��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	C1 p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main1()
{
	//test01();
	test02();

	system("pause");
	return 0;
}