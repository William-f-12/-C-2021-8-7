#include<iostream>
using namespace std;

//this ָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//1-�βκͳ�Ա��������ʱ ����thisָ��������
//2-����ķǾ�̬��Ա�����з��ض����� ��ʹ��return *this

class Person
{
public:
	int age;

	Person(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}

	//��ֵ�ķ�ʽ���ػ᷵��һ���¶��� �����÷����򲻻�
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�� *thisָ��ľ��Ƕ�����
		return *this;
	}
};

void test1()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

void test2()
{
	Person p1(10);

	Person p2(10);
	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main2()
{
	test1();
	test2();

	system("pause");
	return 0;
}