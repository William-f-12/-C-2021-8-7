#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - adjacent_find(起始迭代器，结束迭代器)

void test03()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(6);
	v.push_back(2);
	v.push_back(6);
	v.push_back(6);
	v.push_back(4);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos != v.end())
	{
		cout << "找到了" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main3()
{
	test03();

	system("pause");
	return 0; 
}