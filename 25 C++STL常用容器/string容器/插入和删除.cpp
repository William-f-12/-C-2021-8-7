#include<iostream>
#include<string>
using namespace std;

//����ԭ��
// string& insert(int pos, const char* s);
// string& insert(int pos, const string& str);
// string& insert(int pos, int n, char c);
// string& erase(int pos, int n= npos);  ɾ����pos��ʼ��n���ַ�

void test07()
{
	string str = "hello";
	//����
	str.insert(1, "123");
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;
}

//�����ɾ������ʼ�±궼�Ǵ�0��ʼ

int main7()
{
	test07();

	system("pause");
	return 0;
}