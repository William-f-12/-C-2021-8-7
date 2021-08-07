#include<iostream>
#include<string>
using namespace std;

//函数原型
// - int find(const string& str, int pos = 0) const; 查找str第一次出现位置 从pos开始查找
// - int find(const char* s, int pos = 0) const; 查找s出现位置 从pos开始查找
// - int find(const char* s, int pos, int n) const; 从pos位置查找s的前n个字符第一次位置
// - int find(const char c, int pos = 0) const; 查找字符c第一次出现位置
// - int rfind(const string& str, int pos = npos) const; 查找str最后一次位置 从pos开始查找
// - int rfind(const char* s, int pos = npos) const; 查找s最后一次出现位置 从pos开始查找
// - int rfind(const char* s, int pos, int n) const; 从pos位置查找s的前n个字符最后一次出现位置
// - int rfind(const char c, int pos = 0) const; 查找字符c最后一次出现位置
// - string& replace(int pos, int n, const string& str); 替换从pos开始n个字符为字符串str
// - string& replace(int pos, int n, const char* s); 替换从pos开始n个字符为字符串s

void test04()
{
	//查找
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
	//rfind 和 find 区别： rfind从右往左 find从左往右
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;


	//替换
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