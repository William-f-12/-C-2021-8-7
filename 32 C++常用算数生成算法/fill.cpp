#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

// fill(��ʼ��������������������ֵ)

void myPrint(int val)
{
	cout << val << " ";
}

void test02()
{
	vector<int> v;
	v.resize(10);

	//�����������
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