#include<iostream>
using namespace std;

int main1()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //������������������Ȼ����������С������ȥ��

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //�������������������������Ϊ0

	//����С�����
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl; //������Ҳ������С��

	//ȡģ���㣨ȡ�ࣩ������
	cout << a1 % b1 << endl;
	cout << a2 % b2 << endl;
	//cout << a3 % b3 << endl;//���󣡳���������Ϊ0

	//����С����������ȡģ����
	//cout << d1 % d2 << endl;

	//ǰ�õ���
	int a = 10;
	++a; //�ñ���+1
	cout << "a = " << a << endl;

	//���õ���
	int b = 10;
	b++; //�ñ���+1
	cout << "b = " << b << endl;

	//ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	int A = 10;
	int B = ++A * 10;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	//���õ��� �Ƚ��б��ʽ���� ���ñ���+1
	int C = 10;
	int D = C++ * 10;
	cout << "C = " << C << endl;
	cout << "D = " << D << endl;

	//�ݼ����ñ���-1

	system("pause");

	return 0;
}