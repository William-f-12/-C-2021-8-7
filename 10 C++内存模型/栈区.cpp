#include<iostream>
using namespace std;

//ջ��ע�������Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

int* func(int b) //�β�����Ҳ����ջ��
{
	b = 100;
	int a = 10; //�ֲ����� �����ջ�� �ں���ִ������Զ��ͷ�
	return &a; //���ؾֲ������ĵ�ַ
}

int main2()
{
	int* p = func(1);
	cout << *p << endl; //��һ�ο��Դ�ӡ��ȷ������ ��Ϊ���������˱���
	cout << *p << endl; //�ڶ���������ݾͲ��ܱ�����

	system("pause");

	return 0;
}