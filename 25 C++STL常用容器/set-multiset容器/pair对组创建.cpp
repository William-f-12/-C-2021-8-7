#include<iostream>
#include<string>
using namespace std;

//���� ���ִ�����ʽ
// - pair<type, type> p(value1, value2);
// - pair<type, type> p = make_pair(value1, value2);

void test06()
{
	pair<string, int> p("tom", 18);
	cout << "������" << p.first << " ���䣺" << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 17);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}