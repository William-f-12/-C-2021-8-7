#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// - count(��ʼ��������������������ֵ)
// ����ָ��ֵ�������г��ֵĸ���

void test05()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(12);
	v.push_back(14);
	v.push_back(12);
	v.push_back(11);
	v.push_back(11);

	int num = count(v.begin(), v.end(), 12);
	cout << "12 ���ִ���: " << num << endl;

	//ͳ���Զ�������������Ҫ����==������
}

int main5()
{
	test05();

	system("pause");
	return 0;
}