#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ������
// - ��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
// - ����ģ�����ʱ ��������Զ������Ƶ� ���ᷢ����ʽ����ת��
// - ���������ʾָ�����͵ķ�ʽ ���Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<typename T>
int myAdd02(T a, T b)
{
	return a + b;
}

int main3()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;
	// cout << myAdd02(a, c) << endl; ���� �޷�ȷ��ת���ĸ����� �޷�������ʽ����ת��
	cout << myAdd02<int>(a, c) << endl; //��ʾָ������ ���Է���ת��

	//����ʹ����ʾָ�����ͷ�ʽ���ú���ģ��

	system("pause");
	return 0;
}