#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// replace_if(��ʼ��������������������ν�ʣ���ֵ)

void myPrint(int);

class greater40
{
public:
	bool operator()(int val)
	{
		return val > 40;
	}
};

void test03()
{
	vector<int> v;
	v.push_back(39);
	v.push_back(13);
	v.push_back(41);
	v.push_back(42);
	v.push_back(40);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	replace_if(v.begin(), v.end(), greater40(), 0);
	cout << "�滻��" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}