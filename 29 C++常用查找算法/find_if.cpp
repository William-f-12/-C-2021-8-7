#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - find_if(��ʼ�������������Ӵ�����ν��)

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test02()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end())
	{
		cout << "�ҵ���Ԫ��" << *pos << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}

	//�Զ�������������Ҫдν��
}

int main2()
{
	test02();

	system("pause");
	return 0;
}