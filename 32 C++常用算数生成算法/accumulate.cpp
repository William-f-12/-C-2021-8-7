#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

// - accumulate	����������Ԫ���ۼ��ܺ�
// - fill	�����������Ԫ��
// ���������㷨����С���㷨 ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>

// accumulate(��ʼ����������������������ʼ�ۼ�ֵ)

void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);
	cout << "total = " << total << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}