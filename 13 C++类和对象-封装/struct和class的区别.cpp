#include<iostream>
using namespace std;

//��C++��struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
//struct��Ĭ�Ϸ���Ȩ��Ϊ ����
//class��Ĭ�Ϸ���Ȩ��Ϊ ˽��
class C1
{
	int m_A; //Ĭ����˽��Ȩ��
};

struct C2
{
	int m_A; //Ĭ���ǹ���Ȩ��
};

int main2()
{
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;

	system("pause");

	return 0;
}