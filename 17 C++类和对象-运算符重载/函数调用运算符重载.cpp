#include<iostream>
#include<string>
using namespace std;

//�����������������
//�������������()Ҳ��������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��� ��˳�Ϊ�º���
//�º���û�й̶���д�� �ǳ����

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

int main()
{
	MyPrint print;
	print("hello world"); //����ʹ�������ǳ��������� ���Գ�Ϊ�º���

	MyAdd add;
	cout << add(100, 100) << endl;

	//������������
	cout << MyAdd()(100, 500) << endl; //����+()����һ���������� ����ִ���꼴ɾ��

	system("pause");
	return 0;
}