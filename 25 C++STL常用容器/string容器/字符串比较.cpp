#include<iostream>
#include<string>
using namespace std;

//�ַ����Ƚ��ǰ��ַ���ASCII����бȽ�
// =����0��>����1��<����-1
//����ԭ��
// int compare(const string& s) const;
// int compare(const char* s) const;

void test05()
{
	string str1 = "aello";
	string str2 = "hello";
	if (str1.compare(str2) == 0) {
		cout << "str1 = str2" << endl;
	}
	else if (str1.compare(str2) > 0) {
		cout << "str1 > str2" << endl;
	}
	else if (str1.compare(str2) < 0) {
		cout << "str1 < str2" << endl;
	}
}

//��Ҫ���ڶԱ������ַ����Ƿ����

int main5()
{
	test05();

	system("pause");
	return 0;
}