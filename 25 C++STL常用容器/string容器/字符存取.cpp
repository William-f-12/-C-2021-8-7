#include<iostream>
#include<string>
using namespace std;

//string�е����ַ���ȡ��ʽ������
// char& operator[](int n);
// char& at(int n);

void test06()
{
	string str = "hello";
	//ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}