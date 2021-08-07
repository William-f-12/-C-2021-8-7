#include<iostream>
#include<string>
using namespace std;

//从字符串获取想要的子串
// string substr(int pos = 0, int n = npos) const; 返回由pos开始的n个字符组成的字符串

void test08()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	//实用操作
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