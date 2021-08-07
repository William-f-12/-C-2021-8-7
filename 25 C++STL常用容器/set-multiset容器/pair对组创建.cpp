#include<iostream>
#include<string>
using namespace std;

//对组 两种创建方式
// - pair<type, type> p(value1, value2);
// - pair<type, type> p = make_pair(value1, value2);

void test06()
{
	pair<string, int> p("tom", 18);
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 17);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}