#include<iostream>
using namespace std;

//C++�п�ָ��Ҳ���Ե��ó�Ա���� ����Ҫע����û���õ�thisָ��
//����õ�thisָ�� ��Ҫ�����жϱ�֤����Ľ�׳��

class Person1
{
public:
	int m_Age;

	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL) { return; }
		cout << "age = " << m_Age << endl;
	}
};

void test()
{
	Person1* p = NULL;
	p->showClassName();
	p->showPersonAge(); //���� ��Ϊ����ָ��ΪNULL
}

int main3()
{
	test();

	system("pause");
	return 0;
}