#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - copy	������ָ����Χ��Ԫ�ؿ�������һ������
// - replace	��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
// - replace_if	������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
// - swap	��������������Ԫ��

// copy(��ʼ��������������������Ŀ����ʼ������)
// Ҳ����ֱ���ÿ��������ֵʵ��

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(10);

	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}