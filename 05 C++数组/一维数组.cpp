#include<iostream>
using namespace std;

//�����ص㣺
//����һ���������ڴ�ռ���
//�����ÿ��Ԫ�ض�����ͬ��������

int main1()
{
	//һά��������ֶ��巽ʽ
	//1. �������� ������[ ���鳤�� ]��
	int arr[5];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2. �������� ������[ ���鳤�� ] = { ֵ1�� ֵ2 ...}��
	//�����ʼ������ʱ��û��ȫ����д�꣬����0���ʣ������
	int arr2[5] = { 10, 20, 30 };

	for (int i = 0; i < 5; i++) { cout << arr2[i] << endl; }

	//3. �������� ������[] = { ֵ1�� ֵ2 ...}��
	//���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 11, 22, 33, 44, 55, 66 };
	for (int i = 0; i < 6; i++) { cout << arr3[i] << endl; }


	//һά�����������Ƶ���;��
	//1. ����ͳ�������������ڴ��еĳ��� - sizeof(arr)
	cout << "��������arr�ĳ��ȣ� " << sizeof(arr) << endl;
	cout << "�����е���Ԫ�صĳ���: " << sizeof(arr[0]) << endl;

	//2. ���Ի�ȡ�������ڴ��е��׵�ַ - cout << arr << endl;
	cout << "����ĵ�ַΪ�� " << (int)arr << endl; //��(int)��16����תΪ10����
	cout << "�����һ��Ԫ�ص�ַΪ: " << (int)&arr[0] << endl; //&ȡֵ������ȡһ��Ԫ�صĵ�ַ
	//��������ÿ��Ԫ��ռ4�ֽڿռ�
	//�������ǳ����������Խ��и�ֵ����


	//����1����ֻС�������
	int pigs[5] = { 300, 350, 200, 400, 250 };
	int max = 0;

	for (int i = 0; i < 5; i++) {
		if (pigs[i] > max) { max = pigs[i]; }
	}

	cout << "���ص�С������Ϊ�� " << max << endl;


	//����2������Ԫ������
	int Arr[5] = { 1,3,2,5,4 };
	int start = 0; //��ʼԪ���±�
	int end = sizeof(Arr) / sizeof(Arr[0]) - 1; //ĩβԪ���±�
	int temp = 0; //��ʱ�ڴ�
	cout << "��������ǰ: ";
	for (int i = 0; i < 5; i++) { cout << Arr[i] << " "; }
	cout << endl;

	while (start < end) {
		temp = Arr[start];
		Arr[start] = Arr[end];
		Arr[end] = temp;
		start++;
		end--;
	}
	cout << "�������ú�: ";
	for (int i = 0; i < 5; i++) { cout << Arr[i] << " "; }
	cout << endl;


	//ð������
	//���ã������õ������㷨����������Ԫ�ؽ�������
	int arr0[9] = { 4,2,8,0,5,7,1,3,9 };
	int temp0 = 0;
	int end0 = sizeof(arr0) / sizeof(arr0[0]); //��������Ԫ�ظ���
	cout << "��������ǰ: ";
	for (int i = 0; i < 9; i++) { cout << arr0[i] << " "; }
	cout << endl;

	//1. �Ƚ�����Ԫ�أ������һ���ȵڶ����󣬾ͽ�����������
	//2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ
	//3. �ظ����ϲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
	//����������� = Ԫ�ظ��� - 1
	//ÿ�ֶԱȸ��� = Ԫ�ظ��� - �������� - 1
	for (int i = 0; i < end0 - 1; i++) {
		for (int j = 0; j < end0 - i - 1; j++) {
			if (arr0[j] > arr0[j + 1]) {
				temp0 = arr0[j];
				arr0[j] = arr0[j + 1];
				arr0[j + 1] = temp0;
			}
		}
	}
	cout << "���������: ";
	for (int i = 0; i < 9; i++) { cout << arr0[i] << " "; }
	cout << endl;

	system("pause");

	return 0;
}