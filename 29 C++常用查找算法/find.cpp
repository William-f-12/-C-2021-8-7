#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// - find	����Ԫ��
// - find_if	����������Ԫ��
// - adjacent_find	���������ظ�Ԫ��
// - binary_search	���ֲ��ҷ�
// - count		ͳ��Ԫ�ظ���
// - count_it	������ͳ��Ԫ�ظ���

//�ҵ��˷���ָ��Ԫ�صĵ����� �Ҳ������ؽ���������end()

class Person
{
public:
	int m_age;
	string m_name;

	Person(int age, string name)
	{
		this->m_age = age;
		this->m_name = name;
	}
	//��Ҫ����==�Ų�����
	bool operator==(const Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
};

void test01()
{
	//����������������
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end())
	{
		cout << "�ҵ���Ԫ��" << *pos << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}

	//�����Զ���Ԫ������
	vector<Person> v2;
	Person p1(19, "tom");
	Person p2(12, "jessic");
	Person p3(14, "jerry");
	Person p4(11, "david");
	Person p5(123, "peter");

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);

	vector<Person>::iterator pos2 = find(v2.begin(), v2.end(), p2);
	if (pos2 != v2.end())
	{
		cout << "�ҵ���Ԫ��" << pos2->m_name << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}
}

int main1()
{
	test01();

	system("pause");
	return 0;
}