#include<iostream>
#include<string>
using namespace std;

int main()
{
	//��λ���鴴����ʽ
	//1. �������� ������[ ���� ][ ���� ];
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr1[i][j] << " "; }
		cout << endl;
	}

	//2. �������� ������[ ���� ][ ���� ] = { {����1������2}��{����3������4} };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr2[i][j] << " "; }
		cout << endl;
	}

	//3. �������� ������[ ���� ][ ���� ] = { ����1������2������3������4 };
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr3[i][j] << " "; }
		cout << endl;
	}

	//4. �������� ������[][ ���� ] = { ����1������2������3������4 };
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr3[i][j] << " "; }
		cout << endl;
	}


	//��ά�������Ƶ����ã�
	//1. �鿴��ά������ռ�ڴ�ռ�
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ: " << sizeof(arr1) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ: " << sizeof(arr1[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ: " << sizeof(arr1[0][0]) << endl;

	cout << "��ά��������Ϊ�� " << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "��ά��������Ϊ�� " << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;

	//2. �鿴��ά������׵�ַ
	cout << "��ά������׵�ַΪ��" << (int)arr1 << endl;
	cout << "��λ�����һ���׵�ַΪ" << (int)arr1[0] << endl;
	cout << "��λ����ڶ����׵�ַΪ" << (int)arr1[1] << endl;
	cout << "��λ�����һ��Ԫ���׵�ַΪ" << (int)&arr1[0][0] << endl;
	cout << "��λ����ڶ���Ԫ���׵�ַΪ" << (int)&arr1[0][1] << endl;


	//����1�� ���Գɼ�ͳ��
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����", "����", "����" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) { 
			sum += scores[i][j]; 
		}
		cout << "��" << names[i] << "���ܷ���" << sum << endl;
	}


	system("pause");

	return 0;
}