#include<iostream>
using namespace std;

//�ڶ�̬�� �����е��麯����ʵ���Ǻ�������� ��Ҫ���ǵ�������д������
//��˿��Խ��麯����Ϊ ���麯��
//���麯���﷨�� virtual ����ֵ���� ������ (�Ӳ����б�) = 0;
//���������˴��麯�� �����Ҳ��Ϊ������

//�������ص�
// -�޷�ʵ��������
// -���������д�������еĴ��麯�� ����Ҳ���ڳ�����

class Base //������ �޷�ʵ��������
{
public:
	//���麯��
	virtual void func() = 0;
};

class Son : public Base //���� ������д�����еĴ��麯�� ����ʵ��������
{
public:
	virtual void func()
	{
		cout << "func��������" << endl;
	}
};

int main3()
{
	Base* base = new Son;
	base->func();

	system("pause");
	return 0;
}