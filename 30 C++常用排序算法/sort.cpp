#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

// - sort 对容器内元素进行排序
// - random_shuffle 洗牌 指定范围内元素随机调整次序
// - merge 容器元素合并 并存储到另一元素中
// - reverse 反转指定范围内的元素

// sort(起始迭代器，结束迭代器，谓词)

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.push_back(90);
	v.push_back(20);
	v.push_back(80);
	v.push_back(30);
	v.push_back(50);

	//升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//降序 需填入谓词
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}