#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

// random_shuffle(��ʼ������������������)

void myPrint(int val);

void test02()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main2()
{
	srand((unsigned int)time(NULL));
	test02();

	system("pause");
	return 0;
}