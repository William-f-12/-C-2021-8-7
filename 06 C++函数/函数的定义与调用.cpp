#include<iostream>
using namespace std;

//�����Ķ���5������:
/*
	1. ����ֵ����
	2. ������
	3. �����б�
	4. ���������
	5. return ���ʽ
*/

/*�﷨��

����ֵ���� ������ �������б�
{

	���������

	return ���ʽ
}
*/

//һ���ӷ�����
//���������ʱ��num1��num2��û����ʵ���ݣ�����ʽ�ϵĲ���������β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main1()
{
	//��main�����е���add����
	//���������﷨���������ƣ�������
	int a = 10;
	int b = 20;
	int c = add(a, b); //a��b��Ϊʵ�ʲ��������ʵ�Σ�����ʱ��ʵ�ε�ֵ�ᴫ���β�
	cout << c << endl;

	a = 123412421;
	b = 13123;
	c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}