#include<iostream>
using namespace std;

//�ַ���
//�﷨�� char ch = 'a';
//1. ����ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫����
//2. ��������ֻ����һ���ַ������������ַ���

//C��C++���ַ��ͱ���ֻռ1�ֽ�(8bit)
//�ַ��ͱ�������Ӧ��ASCII������봢�浥Ԫ

int main3()
{
	//������ʽ
	char ch = 'A';
	cout << ch << endl;

	//��ռ�ڴ��С
	cout << "char��ռ�ڴ�ռ�Ϊ��" << sizeof(ch) << endl;

	//��������
	//char ch2 = "b"; //�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'adcdef'; //�����ַ��ͱ���ʱ����������ֻ����һ���ַ�

	//��ӦASCII����
	//a - 97
	//A - 65
	cout << (int)ch << endl;
	
	system("pause");

	return 0;
}