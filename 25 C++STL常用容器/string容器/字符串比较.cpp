#include<iostream>
#include<string>
using namespace std;

//字符串比较是按字符的ASCII码进行比较
// =返回0、>返回1、<返回-1
//函数原型
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

//主要用于对比两个字符串是否相等

int main5()
{
	test05();

	system("pause");
	return 0;
}