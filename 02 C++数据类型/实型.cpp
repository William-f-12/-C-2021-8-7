#include<iostream>
using namespace std;

//ʵ�ͣ������ͣ�
//- ���ڱ�ʾС��

int main2()
{
	//1. ������ float 4�ֽ� 
	//2. ˫���� double 8�ֽ� 
	//Ĭ������£����һ��С������ʾ��6λ��Ч����

	float f1 = 3.14f;
	cout << "f1 = " << f1 << endl;
	cout << "float��ռ�ڴ�ռ�Ϊ" << sizeof(f1) << endl;

	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;
	cout << "double��ռ�ڴ�ռ�Ϊ" << sizeof(d1) << endl;

	//��ѧ������
	float f2 = 3e2; //3 * 10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3 * 0.1^2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}