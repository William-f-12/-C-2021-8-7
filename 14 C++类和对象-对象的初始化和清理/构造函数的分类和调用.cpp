#include<iostream>
using namespace std;

//���캯���ķ���͵���

//���ַ��෽ʽ��
// 1. ��������Ϊ���вι�����޲ι��죨Ĭ�Ϲ��죩
// 2. �����ͷ�Ϊ����ͨ����Ϳ�������

class Person2
{
private:
	int age;
public:
	Person2() //�޲ι��졢Ĭ�Ϲ���
	{
		cout << "Person2���޲ι��캯������" << endl;
	}
	Person2(int a) //�вι���
	{
		age = a;
		cout << "Person2���вι��캯������" << endl;
	}
	Person2(const Person2 &p) //��������
	{
		age = p.age;
		cout << "Person2�Ŀ������캯������" << endl;
	}
	~Person2()
	{
		cout << "Person2��������������" << endl;
	}
};

//���ֵ��÷�ʽ��
// 1. ���ŷ�
// 2. ��ʾ��
// 3. ��ʽת����

void test02()
{
	//���ŷ�
	Person2 p1;//����Ĭ�Ϲ���ʱ ��Ҫ��() ����������Ϊ��һ������������
	Person2 p2(10);
	Person2 p3(p2);

	//��ʾ��
	Person2 p01;
	Person2 p02 = Person2(10); //�вι���
	Person2 p03 = Person2(p02); //��������
	//Person2(10); //�������� �ص㣺��ǰ��ִ�н����� ϵͳ���������յ���������
	// 
	//ע�⣺��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson2(p03) == Person2 p03; ��������
	//Person2(p03);

	//��ʽת����
	Person2 p4 = 10; //�൱�� Person2 p4 = Person2(10); �вι���
	Person2 p5 = p4; //��������
}

int main2()
{
	test02();

	system("pause");
	return 0;
}