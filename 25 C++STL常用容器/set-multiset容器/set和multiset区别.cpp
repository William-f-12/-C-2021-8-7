#include<iostream>
#include<set>
using namespace std;

//set�����Բ����ظ����� ��multiset����
//set�������ݵ�ͬʱ�᷵�ز����� ��ʾ�Ƿ����ɹ�
//multiset���������� ��˿��Բ����ظ�����

void test05()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}
	
	multiset<int> ms;
	//��������ظ���ֵ
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}