#include<iostream>
#include<string>
using namespace std;

//����ԭ��
// - int find(const string& str, int pos = 0) const; ����str��һ�γ���λ�� ��pos��ʼ����
// - int find(const char* s, int pos = 0) const; ����s����λ�� ��pos��ʼ����
// - int find(const char* s, int pos, int n) const; ��posλ�ò���s��ǰn���ַ���һ��λ��
// - int find(const char c, int pos = 0) const; �����ַ�c��һ�γ���λ��
// - int rfind(const string& str, int pos = npos) const; ����str���һ��λ�� ��pos��ʼ����
// - int rfind(const char* s, int pos = npos) const; ����s���һ�γ���λ�� ��pos��ʼ����
// - int rfind(const char* s, int pos, int n) const; ��posλ�ò���s��ǰn���ַ����һ�γ���λ��
// - int rfind(const char c, int pos = 0) const; �����ַ�c���һ�γ���λ��
// - string& replace(int pos, int n, const string& str); �滻��pos��ʼn���ַ�Ϊ�ַ���str
// - string& replace(int pos, int n, const char* s); �滻��pos��ʼn���ַ�Ϊ�ַ���s

void test04()
{
	//����
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
	//rfind �� find ���� rfind�������� find��������
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;


	//�滻
	string str2 = "abcdefgh";
	str2.replace(1, 3, "1111");
	cout << "str2 = " << str2 << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}