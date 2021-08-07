#include<iostream>
#include<map>
using namespace std;

//����ԭ��
// - insert(elem);
// - clear();
// - erase(pos); ɾ��pos��������ָ��Ԫ�� ������һ��Ԫ�صĵ�����
// - erase(beg, end); ɾ������[beg, ned)������Ԫ�� ������һ��Ԫ�صĵ�����
// - erase(key); ɾ��������ֵΪkey��Ԫ��

template<typename T1, typename T2>
void printMap(const map<T1, T2>& m)
{
	for (typename map<T1, T2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test03()
{
	map<int, int> m;
	//��һ�ֲ���
	m.insert(pair<int, int>(1, 1));
	m.insert(pair<int, int>(2, 4));
	m.insert(pair<int, int>(3, 9));
	m.insert(pair<int, int>(4, 16));
	//�ڶ��ֲ���
	m.insert(make_pair(5, 25));
	m.insert(make_pair(6, 36));
	//�����ֲ���
	m.insert(map<int, int>::value_type(7, 49));
	//�����ֲ��� - ������
	m[8] = 64;
	//[]��������� ������key���ʵ�value

	printMap(m);

	//ɾ��
	m.erase(m.begin());
	m.erase(3); // ����keyɾ��
	printMap(m);

	//���
	//m.erase(m.begin(), m.end()); ������ɾ��
	m.clear();
	printMap(m);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}