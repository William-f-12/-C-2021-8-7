#include<iostream>
using namespace std;

//��ͨ�����ͺ���ģ����Է�������
//���ù���
// 1. �����ͨ�����ͺ���ģ�嶼���Ե��� ���ȵ�����ͨ����
// 2. �������ÿ�ģ������б���ǿ�Ƶ��ú���ģ��
// 3. ����ģ��Ҳ���Է�������
// 4. �������ģ����Է������õ�ƥ�� ���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "���õ�����ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "���õ��Ǻ���ģ��" << endl;
}
//��Ҫͬʱ����

template<typename T>
void myPrint(T a, T b, T c)
{
	cout << "���õ������ص�ģ��" << endl;
}

int main4()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);
	//ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	myPrint(a, b, 100);
	//�������ģ��������õ�ƥ�䣬 ���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);

	system("pause");
	return 0;
}