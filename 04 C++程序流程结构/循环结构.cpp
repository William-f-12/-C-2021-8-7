#include<iostream>
#include<ctime>//timeϵͳʱ��ͷ�ļ�
using namespace std;

int main2()
{
	//whileѭ��

	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}

	//�����������ӣ����õ�ǰϵͳʱ�����������
	srand((unsigned int)time(NULL));
	//���������
	int num = rand() % 100 + 1;
	cout << num << endl;

	double val = 0;
	cin >> val;

	while (val != num) {
		if (val > num) { cout << "�²����" << endl; }
		else { cout << "�²��С" << endl; }
		cin >> val;
	}
	cout << "��ϲ��" << endl;

	//do...whileѭ��
	//��ִ��ѭ����䣬���ж�ѭ������
	int num1 = 100;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	do {
		ge = num1 % 10;
		shi = num1 / 10 % 10;
		bai = num1 / 100;

		if ((ge*ge*ge + shi*shi*shi + bai*bai*bai) == num1) { cout << num1 << endl; }
		num1++;
	} 	while (num1 < 1000);

	//forѭ��
	for (int i = 0/*0*/; i < 10/*1*/; i++/*3*/) { cout << i << endl;/*2*/ }
	//ִ��˳�� 0123123123...

	for (int a = 1; a <= 100; a++) {
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7) {
			cout << "������" << endl;
		}
		else { cout << a << endl; }
	}

	//Ƕ��ѭ��
	for (int n = 1; n < 10; n++) {
		for (int m = 1; m <= n; m++) {
			cout << m << "x" << n << "=" << m * n << "\t";
		}
		cout << endl;
	}
	

	system("pause");

	return 0;
}