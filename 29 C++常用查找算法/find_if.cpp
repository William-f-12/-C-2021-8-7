#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - find_if(起始迭代器，结束接待器，谓词)

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test02()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end())
	{
		cout << "找到了元素" << *pos << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

	//自定义数据类型需要写谓词
}

int main2()
{
	test02();

	system("pause");
	return 0;
}