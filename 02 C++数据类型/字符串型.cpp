#include<iostream>
#include<string>//��c++����ַ���Ҫ�������ͷ�ļ���
using namespace std;

//�ַ�����
//C���  char ������[] = "�ַ���ֵ";
//C++���string ������ = "�ַ���ֵ";

int main5()
{
	//1. C����ַ���
	//Ҫ�������ţ� �Ⱥź���Ҫ��˫���� ���������ַ���
	char str[] = "hello world";
	cout << str << endl;

	//2. C++����ַ���
	string str2 = "hello world!";
	cout << str2 << endl;

	cout << "str: " << sizeof(str) << endl;
	cout << "str2: " << sizeof(str2) << endl;

	system("pause");

	return 0;
}