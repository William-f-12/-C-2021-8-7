//map����Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey(��ֵ) ���������� �ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

//map��multimap���ڹ���ʽ���� �ײ�ṹ�ö�����ʵ��

//�ŵ㣺
// - ���Ը���keyֵ�����ҵ�valueֵ
//map��multimap����
// map���������������ظ�keyֵԪ��
// multimap�������������ظ�keyֵԪ��

#include<iostream>
#include<map>
using namespace std;

//���죺
// - map<T1, T2> mp; Ĭ�Ϲ���
// - map(const map& mp); ��������
//��ֵ��
// - map& operator=(const map& mp); ���صȺŲ�����

template<typename T1, typename T2>
void printMap(const map<T1, T2>& m)
{
	for (typename map<T1, T2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//Ĭ�Ϲ���
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	printMap(m);

	//��������
	map<int, int> m2(m);
	printMap(m2);

	//��ֵ
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}