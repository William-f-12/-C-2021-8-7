#include<iostream>
using namespace std;

int main3()
{
	//const ����ָ�����������:
	int a = 10;
	int b = 10;

	// 1. const����ָ�� - ����ָ��
	//ָ���ָ����Ը��ģ�ָ��ָ���ֵ�����Ը���	
	const int* p1 = &a;
	//*p1 = 20; ����,ָ��ָ���ֵ���ܸ���
	p1 = &b; //��ȷ

	// 2. const���γ��� - ָ�볣��
	//ָ���ָ���ܸģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 20; //��ȷ
	//p2 = &b; ����ָ���ָ���ܸ�
	
	// 3. const������ָ�룬�����γ���
	//ָ���ָ���ָ���ֵ�������Ը�
	const int* const p = &a;


	system("pause");

	return 0;
}