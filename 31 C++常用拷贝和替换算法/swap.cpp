#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// swap(����1������2)
// ������ͬ�����͵�����

void myPrint(int);

void test04()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(10 - i);
	}

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;

	cout << "�滻��" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}

int main()
{
	test04();

	system("pause");
	return 0;
}