#include<iostream>
using namespace std;

//��C++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��

//������Ǵ������ݣ��������ǵ����ݣ����û�о���Ĭ��ֵ
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������
//1. ���ĳ��λ���Ѿ�����Ĭ�ϲ�����������������󣬴����Ҷ�������Ĭ��ֵ
//2. �����������������Ĭ�ϲ�������ô�����Ķ��岻����Ĭ�ϲ���
//�����Ͷ���ֻ��һ����Ĭ�ϲ���
int func2(int a = 10, int b = 10);

int func2(int a, int b)
{
	return a + b;
}

int main1()
{
	cout << func(10, 30) << endl;
	cout << func2() << endl;

	system("pause");

	return 0;
}