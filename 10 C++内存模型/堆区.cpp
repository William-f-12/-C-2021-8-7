#include<iostream>
using namespace std;

//�������ɳ���Ա����

int* func1()
{
	//��new�ڶ�����������
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
	int* p = new int(10);
	return p;
}

int main3()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}