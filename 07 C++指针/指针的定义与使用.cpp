#include<iostream>
using namespace std;

//ָ����32λ��ռ4���ֽڣ�64λ��8���ֽ�

int main1()
{
	//1. ����ָ��
	int a = 10;
	//ָ�붨����﷨: �������� * ָ���������
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;

	//ָ����ռ���ڴ�ռ�
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;

	//2. ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ���ڴ��е�����
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}