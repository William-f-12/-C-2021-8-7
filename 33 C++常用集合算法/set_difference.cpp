#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// set_difference(��ʼ������1������������1����ʼ������2������������2��Ŀ����ʼ������)
// v1��v2�Ĳ ���� v2��v1�Ĳ

void myPrint(int val);

void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;

	vector<int> v3;
	v3.resize(max(v1.size(), v2.size()));

	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myPrint);
	cout << endl;

	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());
	for_each(v3.begin(), itEnd, myPrint);
	cout << endl;
}

int main()
{
	test03();

	system("pause");
	return 0;
}