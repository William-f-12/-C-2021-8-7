#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

//关系仿函数：实现关系对比
// - template<class T> bool equal_to<T> 等于
// - template<class T> bool not_equal_to<T> 不等于
// - template<class T> bool greater<T> 大于
// - template<class T> bool greater_equal<T> 大于等于
// - template<class T> bool less<T> 小于
// - template<class T> bool less_equal<T> 小于等于

void test04()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(10);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "--------------------------" << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}