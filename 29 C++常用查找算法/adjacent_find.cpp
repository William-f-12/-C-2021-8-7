#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - adjacent_find(��ʼ������������������)

void test03()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(6);
	v.push_back(2);
	v.push_back(6);
	v.push_back(6);
	v.push_back(4);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos != v.end())
	{
		cout << "�ҵ���" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

int main3()
{
	test03();

	system("pause");
	return 0; 
}