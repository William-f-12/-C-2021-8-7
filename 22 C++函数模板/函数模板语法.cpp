#include<iostream>
using namespace std;

//����ģ�����ã�����һ��ͨ�ú����亯������ֵ���ͺ��β����Ϳ��Բ������ƶ� ��һ�����������������

//�﷨��
//template<typename T>
//������������
//template - ��������ģ��
//typename - ��������ķ�����һ���������� ������class����
//T - ͨ�õ��������� �����滻 ͨ��Ϊ��д��ĸ


//�����������ͺ���
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//���Ͳ�����

//ע�����
//1. �Զ������Ƶ� �����Ƶ���һ�µ���������T �ſ���ʹ��
//2. ģ�����Ҫȷ����T���������� �ſ���ʹ��

int main1()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	
	//���ú���ģ�彻��
	//���ַ�ʽ��ʹ��
	//1. �Զ������Ƶ�
	//mySwap(a, b);
	//2. ��ʾָ������
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	mySwap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");
	return 0;
}