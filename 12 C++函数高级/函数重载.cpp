#include<iostream>
using namespace std;

//�������أ�������������ͬ����߸�����
//����������ͬһ���������£�����������ͬ���������� ���Ͳ�ͬ �� ������ͬ �� ˳��ͬ

void func()
{
	cout << "func()�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���!" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���!" << endl;
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����

//1-������Ϊ��������
void fun(int& a)
{
	cout << "fun(int& a)�ĵ���" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int& a)�ĵ���" << endl;
}

//2-������������Ĭ�ϲ���
void fun2(int a, int b = 10)
{
	cout << "fun2��int a, int b���ĵ���" << endl;
}

void fun2(int a)
{
	cout << "fun2��int a���ĵ���" << endl;
}

int main()
{
	func();
	func(2);
	func(3.2);

	int a = 10;
	fun(a); //���õ�һ���汾����Ϊa�Ǳ�����Ĭ�ϵ�����const��
	fun(10); //int& a = 10���Ϸ���const int& a = 10�Ϸ������Ե��õڶ���

	//fun2(10); ��������������Ĭ�ϲ��������ֶ����ԣ��������������������

	system("pause");

	return 0;
}