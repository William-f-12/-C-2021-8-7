#include<iostream>
#include<map>
using namespace std;

//����ԭ��
// - find(key); ����key�Ƿ���� �����ڷ��ظü���Ԫ�صĵ����� �������ڷ���map.end()
// - count(key); ͳ��key��Ԫ�ظ���

void test04()
{
	//����
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "���ҵ���Ԫ��key = " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ���keyԪ�� count���Ҫô��0 Ҫô��1
	//multimap��countͳ�ƿ��ܴ���1
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}