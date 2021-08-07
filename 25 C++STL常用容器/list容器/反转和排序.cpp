#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

//����ԭ��:
// - reverse(); ��ת�б�
// - sort(); ��������

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)
{
	//���� ���õ�һ�������ڵڶ�����
	return v1 > v2;
}

void test06()
{
	list<int> l1;
	l1.push_back(19);
	l1.push_back(10);
	l1.push_back(23);
	l1.push_back(4);
	printList(l1);

	//��ת
	cout << "��ת��" << endl;
	l1.reverse();
	printList(l1);

	//����
	cout << "�����:" << endl;
	//���в�֧��������ʵ����������� �������ñ�׼�㷨
	//sort(l1.begin(), l1.end());
	//��֧��������ʵ����������� �ڲ����ṩ��Ӧ�㷨
	l1.sort(); // Ĭ��������򣺴�С����
	printList(l1);

	cout << "����:" << endl;
	l1.sort(myCompare);
	printList(l1);
}

int main6()
{
	test06();

	system("pause");
	return 0;
}