//����Ԫ�ض����ڲ���ʱ�Զ�������
//set��multiset���ڹ���ʽ���� �ײ�ṹ���ö�����ʵ��
// 
//set��multiset����
// - set���������������ظ�Ԫ��
// - multiset�������������ظ�Ԫ��

#include<iostream>
#include<set>
using namespace std;

//����:
// - set<T> st; Ĭ�Ϲ���
// - set(const set& st); ��������
//��ֵ:
// - set& operator=(const set& st); ���صȺŲ�����

template<typename T>
void printSet(const set<T>& s)
{
	for (typename set<T>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;

	//��������ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//set�����ص㣺����Ԫ���ڲ���ʱ�Զ������� ����������ظ�ֵ
	printSet(s1);

	//��������
	set<int> s2(s1);
	printSet(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	printSet(s3);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}