#include<iostream>
using namespace std;

//���μ̳и���
//	����������̳�ͬһ������
//	����ĳ����ͬʱ�̳�����������
//	���ּ̳б���Ϊ���μ̳� ������ʯ�̳�

//���μ̳����⣺
//1. ����ʹ������ʱ �����������
//2. ����̳����������������������� ֻ��Ҫһ��

//������
class Animal
{
public:
	int age;
};

//������̳� ���Խ�����μ̳е�����
//�̳�֮ǰ���Ϲؼ��� virtual��Ϊ��̳�
//Animal��Ϊ�����

//��
class Sheep :virtual public Animal {};
//��
class Camel :virtual public Animal {};
//����
class S_C : public Sheep, public Camel {};

void test7()
{
	S_C sc;

	sc.Sheep::age = 18;
	sc.Camel::age = 15;
	//���μ̳�ʱ ��������ӵ����ͬ���� ��Ҫ������������
	cout << "sc.Sheep::age = " << sc.Sheep::age << endl;
	cout << "sc.Camel::age = " << sc.Camel::age << endl;
	//�������ֻҪ��һ�ݾͿ����� ���μ̳е������������� ������Դ�˷�

	cout << "sc.age = " << sc.age << endl; //������̳�
}

int main()
{
	//vbptr: virtual base pointer �����ָ��, ָ��vbtable(virtual base table) 
	//vbtable ������: ��¼��ƫ���� �����������һ������

	test7();

	system("pause");
	return 0;
}