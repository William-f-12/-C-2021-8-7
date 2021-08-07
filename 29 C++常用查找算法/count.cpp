#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - count(起始迭代器，结束迭代器，值)
// 查找指定值在容器中出现的个数

void test05()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(12);
	v.push_back(14);
	v.push_back(12);
	v.push_back(11);
	v.push_back(11);

	int num = count(v.begin(), v.end(), 12);
	cout << "12 出现次数: " << num << endl;

	//统计自定义数据类型需要重载==操作符
}

int main5()
{
	test05();

	system("pause");
	return 0;
}