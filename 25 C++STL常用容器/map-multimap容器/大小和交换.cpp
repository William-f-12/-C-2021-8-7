#include<iostream>
#include<map>
using namespace std;

// - size();
// - empty()��
// - swap(mp);  ����

template<typename T1, typename T2>
void printMap(const map<T1, T2>& m)
{
	for (typename map<T1, T2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test02()
{
	//��С
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 1));
	m1.insert(pair<int, int>(2, 4));
	m1.insert(pair<int, int>(3, 9));
	m1.insert(pair<int, int>(4, 16));

	if (m1.empty())
	{
		cout << "m1Ϊ��" << endl;
	}
	else
	{
		cout << "m1��Ϊ��" << endl;
		cout << "m1�Ĵ�СΪ" << m1.size() << endl;
	}

	map<int, int> m2;
	m2.insert(pair<int, int>(5, 500));
	m2.insert(pair<int, int>(6, 600));
	m2.insert(pair<int, int>(7, 700));
	m2.insert(pair<int, int>(8, 800));

	cout << "����ǰ��" << endl;
	printMap(m1);
	printMap(m2);
	cout << "������" << endl;
	m1.swap(m2);
	printMap(m1);
	printMap(m2);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}