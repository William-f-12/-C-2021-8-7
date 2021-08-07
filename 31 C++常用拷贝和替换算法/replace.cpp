#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// replace(起始迭代器，结束迭代器，旧值，新值)

void myPrint(int);

void test02()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	cout << "替换后：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main2()
{
	test02();

	system("pause");
	return 0;
}