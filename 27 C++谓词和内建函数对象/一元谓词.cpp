//���
// - ����bool���͵ķº�����Ϊν��
// - ���operator()����һ������ ��ô����һԪν��
// - ���operator(0������������ ��ķ������Ԫν��

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)const
	{
		return val > 5;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//������������û�д���5������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴���5������Ϊ��" << (*it) << endl;
	}
}

int main1()
{
	test01();

	system("pause");
	return 0;
}