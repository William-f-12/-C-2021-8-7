#include<iostream>
#include<set>
using namespace std;

//����ԭ��
// - insert(elem);
// - clear();
// - erase(pos); ɾ��pos��������ָ���Ԫ�� ������һ��Ԫ�صĵ�����
// - erase(beg, end); ɾ������[beg, end)������Ԫ�� ������һ��Ԫ�صĵ�����
// - erase(elem); ɾ��������ֵΪelem��Ԫ��

template<typename T>
void printSet(const set<T>& s)
{
	for (typename set<T>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	set<int> s1;
	//����
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);

	//����
	printSet(s1);

	//ɾ��
	s1.erase(s1.begin());
	printSet(s1);

	//ɾ�����ذ汾
	s1.erase(30);
	printSet(s1);

	//���
	//1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}