#include<iostream>
using namespace std;

//��������
//���������βΣ���ֹ�����

//��ӡ����
void showValue(const int& val)
{
	//val = 1000; 
	cout << "val = " << val << endl;
}

int main()
{
	int a = 10;
	int& ref = a;
	//int& ref = 10; //���ñ�����һ��Ϸ����ڴ�ռ�
	//����const֮�󣬱������������޸�Ϊ��int temp = 10; const int& ref1 = temp;
	const int& ref1 = 10; 
	//ref1 = 20; //����const���Ϊֻ���������޸�

	a = 100;
	showValue(a);

	system("pause");

	return 0;
}