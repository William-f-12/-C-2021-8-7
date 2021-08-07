#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// merge(起始迭代器1，结束迭代器1，起始迭代器2，结束迭代器2，目标起始迭代器);
//容器元素合并 并存储到另一容器中
// 两个容器必须是有序的

void myPrint(int val);

void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i * i);
	}

	vector<int> v3;
	//目标容器需提前开辟空间
	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), myPrint);
	cout << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}