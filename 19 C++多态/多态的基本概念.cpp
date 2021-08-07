#include<iostream>
using namespace std;

//��̬��C++���������������֮һ
//��̬��Ϊ����
// 1. ��̬��̬���������� �� ��������� ���ھ�̬��̬ ���ú�����
// 2. ��̬��̬����������麯��ʵ������ʱ��̬
 
//��̬��̬�Ͷ�̬��̬������
// ��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
// ��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

class Animal
{
public:
	//speak���������麯��
	//����ǰ�����virtual�ؼ��� ����麯�� ��ķ�������ڱ���ʱ�Ͳ���ȷ������������
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//��ַ��� �ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵�� ��ô���������ַ�Ͳ�����ǰ�� ��Ҫ�����н׶ν��а� ��ַ���

//��̬��̬��������
// 1. �м̳й�ϵ
// 2. ��д�����е��麯��

//��̬��̬��ʹ��
//�����ָ��������� ִ���������

void doSpeak(Animal &animal) //Animal &animal = cat;
{
	animal.speak();
}

int main1()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl; 
	//4 ָ����ռ�ڴ�-vfptr(virtual function pointer) �麯��(��)ָ�� ָ���麯����(vftable)
	//���ڲ���¼�麯���ĵ�ַ &Animal::speak 
	//��ָ��Ҳ���̳е����� ��������д�˸�����麯�� �����е��麯�����ڲ����滻��������麯����ַ
	//�������ָ�������ָ���������ʱ ������̬

	Cat cat;
	Dog dog;

	doSpeak(cat); //C++�����ൽ�����ת��
	doSpeak(dog);

	system("pause");
	return 0;
}