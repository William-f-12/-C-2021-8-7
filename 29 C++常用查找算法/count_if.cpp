#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - count_if(��ʼ��������������������ν��)

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int num = count_if(v.begin(), v.end(), GreaterFive());
	cout << "����5�����ĸ���Ϊ��" << num << endl;

	//�����Զ����������� ��Ҫ����ν��
}

int main()
{
	test06();

	system("pause");
	return 0;
}