#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - transform(��ʼ����������������������һ����������ʼ������������) ��һ������ת�Ƶ���һ��������

class Transform
{
public:
	int operator()(int v)
	{
		return v * v;
	}
};

class MyPrint
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};

void test02()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(v1.size()); // Ŀ��������Ҫ��ǰ���ٿռ�

	transform(v1.begin(), v1.end(), v2.begin(), Transform());

	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}