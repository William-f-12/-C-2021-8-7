#include<iostream>
using namespace std;

//��ǰ���߱����������Ĵ��ڣ��������ú���������
//����������
//��������д��Σ����Ƕ���ֻ����һ��
int max(int a, int b);

int main4()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//�����Ķ���
int max(int a, int b)
{
	return a > b ? a : b;
}