#include<iostream>
using namespace std;

//C++�к������β��б��п�����ռλ������������ռλ������ʱ�������λ��
//����ֵ���� ������(��������) {}
//ռλ������������Ĭ�ϲ���
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main2()
{
	func(10);

	system("pause");

	return 0;
}