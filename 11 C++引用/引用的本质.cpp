#include<iostream>
using namespace std;

//���õı�����C++�ڲ�ʵ����һ��ָ�볣��
//����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ܸ�

int main4()
{
	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a
	int& ref = a;
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20��

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}