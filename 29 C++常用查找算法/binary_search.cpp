#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - bool binary_search(iterator beg, iterator end, value);
// ���ز���ֵtrue��false
// �����������в�����

void test04()
{
	vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}

	if (binary_search(v.begin(), v.end(), 89))
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

int main4()
{
	test04();

	system("pause");
	return 0;
}