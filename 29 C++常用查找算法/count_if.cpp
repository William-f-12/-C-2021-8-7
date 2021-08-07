#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - count_if(起始迭代器，结束迭代器，谓词)

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int num = count_if(v.begin(), v.end(), GreaterFive());
	cout << "大于5的数的个数为：" << num << endl;

	//对于自定义数据类型 需要更改谓词
}

int main()
{
	test06();

	system("pause");
	return 0;
}