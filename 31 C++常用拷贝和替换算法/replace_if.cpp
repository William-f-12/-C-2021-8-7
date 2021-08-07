#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// replace_if(起始迭代器，结束迭代器，谓词，新值)

void myPrint(int);

class greater40
{
public:
	bool operator()(int val)
	{
		return val > 40;
	}
};

void test03()
{
	vector<int> v;
	v.push_back(39);
	v.push_back(13);
	v.push_back(41);
	v.push_back(42);
	v.push_back(40);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	replace_if(v.begin(), v.end(), greater40(), 0);
	cout << "替换后：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}