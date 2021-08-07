#include<iostream>
#include<list>
using namespace std;

//����ԭ��
// - list<T> lst;
// - list(beg, end);
// - list(n, elem);
// - list(const list& lst);

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	// Ĭ�Ϲ���
	list<int> l1; 
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	//���䷽ʽ����
	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	//��������
	list<int> l3(l2);
	printList(l3);

	//n��elem
	list<int> l4(10, 1000);
	printList(l4);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}