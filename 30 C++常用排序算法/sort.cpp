#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

// - sort ��������Ԫ�ؽ�������
// - random_shuffle ϴ�� ָ����Χ��Ԫ�������������
// - merge ����Ԫ�غϲ� ���洢����һԪ����
// - reverse ��תָ����Χ�ڵ�Ԫ��

// sort(��ʼ��������������������ν��)

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.push_back(90);
	v.push_back(20);
	v.push_back(80);
	v.push_back(30);
	v.push_back(50);

	//����
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//���� ������ν��
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}