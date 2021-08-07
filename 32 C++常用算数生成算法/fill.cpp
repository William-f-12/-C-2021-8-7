#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

// fill(起始迭代器，结束迭代器，值)

void myPrint(int val)
{
	cout << val << " ";
}

void test02()
{
	vector<int> v;
	v.resize(10);

	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}