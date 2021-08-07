#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// resverse(起始迭代器，结束迭代器)

void myPrint(int val);

void test04()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test04();

	system("pause");
	return 0;
}