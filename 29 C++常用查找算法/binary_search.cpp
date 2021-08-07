#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - bool binary_search(iterator beg, iterator end, value);
// 返回布尔值true或false
// 在无序序列中不可用

void test04()
{
	vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}

	if (binary_search(v.begin(), v.end(), 89))
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main4()
{
	test04();

	system("pause");
	return 0;
}