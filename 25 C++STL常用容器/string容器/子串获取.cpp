#include<iostream>
#include<string>
using namespace std;

//���ַ�����ȡ��Ҫ���Ӵ�
// string substr(int pos = 0, int n = npos) const; ������pos��ʼ��n���ַ���ɵ��ַ���

void test08()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	//ʵ�ò���
	string email = "zhangsan@sina.com";
	int pos = email.find('@');
	string usrName = email.substr(0, pos);
	cout << "usrName: " << usrName << endl;
}

int main()
{
	test08();

	system("pause");
	return 0;
}