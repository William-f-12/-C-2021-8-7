#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// merge(��ʼ������1������������1����ʼ������2������������2��Ŀ����ʼ������);
//����Ԫ�غϲ� ���洢����һ������
// �������������������

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
	//Ŀ����������ǰ���ٿռ�
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