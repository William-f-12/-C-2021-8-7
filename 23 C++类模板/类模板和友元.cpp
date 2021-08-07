#include<iostream>
#include<string>
using namespace std;

//ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���


template<class T1, class T2>
class Person5;

//����ʵ�� - �ñ�������ǰ����
template<typename T1, typename T2>
void printPerson2(Person5<T1, T2> p)
{
	cout << "����ʵ�� name: " << p.Name << " age: " << p.Age << endl;
}

template<class T1, class T2>
class Person5
{
	//ȫ�ֺ��� ����ʵ��:
	friend void printPerson(Person5<T1, T2> p)
	{
		cout << "����ʵ�� name: " << p.Name << " age: " << p.Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��:
	//��Ҫ��һ����ģ������б�
	//���ȫ�ֺ��� ������ʵ�� ��Ҫ�ñ�������ǰ֪�����������ģ�����
	friend void printPerson2<>(Person5<T1, T2> p);

public:
	Person5(T1 name, T2 age)
	{
		this->Age = age;
		this->Name = name;
	}

private:
	T1 Name;
	T2 Age;
};

int main8()
{
	Person5<string, int> p("Tom", 20);
	printPerson(p);
	printPerson2(p);

	system("pause");
	return 0;
}