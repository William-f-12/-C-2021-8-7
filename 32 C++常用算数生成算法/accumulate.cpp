#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

// - accumulate	计算容器内元素累计总和
// - fill	向容器中添加元素
// 算数生成算法属于小型算法 使用时包含的头文件为#include<numeric>

// accumulate(起始迭代器，结束迭代器，起始累加值)

void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);
	cout << "total = " << total << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}