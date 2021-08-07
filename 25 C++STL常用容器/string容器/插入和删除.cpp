#include<iostream>
#include<string>
using namespace std;

//函数原型
// string& insert(int pos, const char* s);
// string& insert(int pos, const string& str);
// string& insert(int pos, int n, char c);
// string& erase(int pos, int n= npos);  删除从pos开始的n个字符

void test07()
{
	string str = "hello";
	//插入
	str.insert(1, "123");
	cout << "str = " << str << endl;

	//删除
	str.erase(1, 3);
	cout << "str = " << str << endl;
}

//插入和删除的起始下标都是从0开始

int main7()
{
	test07();

	system("pause");
	return 0;
}