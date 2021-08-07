// string��C++�����ַ��� ��string��������һ����
// string��char*����
// - char*��һ��ָ��
// - string��һ���� ���ڲ���װ��char* ��������ַ��� ��һ��char*�͵�����
// �ص㣺
//	string���ڷ�װ�˺ܶ��Ա���� �����find������copy��ɾ��delete���滻replace������insert
//	string����char*��������ڴ� ���õ��ĸ���Խ���ȡֵԽ��� �����ڽ��и���

#include<iostream>
using namespace std;
#include<string>

// string���캯��
// ���캯��ԭ��:
// - string(); ����һ���յ��ַ���
// - string(const char* s); ʹ���ַ���s��ʼ��
// - string(const string& str); ʹ����һ��string�����ʼ��
// - string(int n, char c); ʹ��n���ַ�c��ʼ��

void test01()
{
	string s1; //Ĭ�Ϲ���

	const char* str = "hello world";
	string s2(str);
	cout << "s2: " << s2 << endl;

	string s3(s2);
	cout << "s3: " << s3 << endl;

	string s4(10, 'a');
	cout << "s4: " << s4 << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}