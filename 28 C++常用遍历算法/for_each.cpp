//�㷨��Ҫ����ͷ�ļ�<algorithm> <functional> <numeric>
//<algorithm>������STLͷ�ļ�������һ�� ��Χ�漰���Ƚϡ����������ҡ��������������ơ��޸ĵ�
//<numeric>�����С ֻ��������������������м���ѧ�����ģ�庯��
//<functional>������һЩģ���� ����������������

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// - for_each(��ʼ������������������������) ��������
// for_each��ʵ�ʿ���������õı����㷨 ��Ҫ��������

//��ͨ����
void print(int val)
{
	cout << val << " ";
}

//�º���
class print2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	for_each(v.begin(), v.end(), print2());
	cout << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}