#include<iostream>
using namespace std;

//�������ͣ�
//- C++�ڴ���һ����������ʱ������Ҫָ����Ӧ���������ͣ������޷������������ڴ�

//sizeof �ؼ��֣�
//- sizeof �ؼ��ֿ���ͳ������������ռ�ڴ��С
//�﷨�� sizeof(��������/����)

int main1()
{
	//���ͣ� ��ʾ�������͵�����
	//1. ������ 2�ֽ�: -2^15 ~ 2^15-1��-32768 ~ 32767��
	short num1 = 10;
	//2. ���� 4�ֽڣ� -2^31 ~ 2^31-1
	int num2 = 10;
	//3. ������ win-4�ֽڣ� -2^31 ~ 2^31-1
	long num3 = 10;
	//4. �������� 8�ֽڣ� -2^63 ~ 2^63-1
	long long num4 = 10;

	cout << "short��ռ�ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	cout << "int��ռ�ڴ�ռ�Ϊ��" << sizeof(num2) << endl;
	cout << "long��ռ�ڴ�ռ�Ϊ��" << sizeof(num3) << endl;
	cout << "long long��ռ�ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	system("pause");

	return 0;
}