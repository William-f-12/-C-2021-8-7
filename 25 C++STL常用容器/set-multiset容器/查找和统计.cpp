#include<iostream>
#include<set>
using namespace std;

//����ԭ��
// - find(key); ����key�Ƿ���� �����ڷ��ظü���Ԫ�صĵ����� �������ڷ���set.end();
// - count(key); ͳ��key��Ԫ�ظ���

void test04()
{
	//����
	set<int> s1;
	
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	//����set���� ͳ�ƽ��Ҫô��0 Ҫô��1
	cout << "s1��" << num << "��30" << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}