#include<iostream>
#include<string>
using namespace std;

//��װ������
//-�����Ժ���Ϊ��Ϊһ�����壬���������е�����
// �﷨��class ����{ ����Ȩ�ޣ����� / ��Ϊ }��
// Բ��
const double PI = 3.14; //Բ����

class Circle
{
	//����Ȩ��
public: //����Ȩ��

	//����
	int m_r; //�뾶

	//��Ϊ
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

//ѧ����
class Student
{
public:
	//���е����Ժ���Ϊͳһ��Ϊ ��Ա
	//����Ҳ��Ϊ ��Ա���� �� ��Ա����
	//��ΪҲ��Ϊ ��Ա���� �� ��Ա����

	string name;
	int id;

	void show()
	{
		cout << "name: " << name << endl;
		cout << "id: " << id << endl;
	}
	//��������ֵ
	void setName(string Name)
	{
		name = Name;
	}
};

//-�����Ժ���Ϊ����Ȩ�޿���
// ����Ȩ�������֣� 
//1. public		����Ȩ��	��Ա�����ڿ��Է��� ����Ҳ���Է���
//2. protected	����Ȩ�� ��Ա�����ڿ��Է��� ���ⲻ���Է��� ������Է��ʸ����б���������
//3. private	˽��Ȩ�� ��Ա�����ڿ��Է��� ���ⲻ���Է��� ���಻�ܷ��ʸ�������˽������

class Person
{
public:
	//����Ȩ��
	string m_Name;

	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}

protected:
	//����Ȩ��
	string m_Car;

private:
	//˽��Ȩ��
	int m_Password;
};

int main1()
{
	//ͨ��Բ�ഴ�������Բ������
	Circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ" << c1.calculateZC() << endl;

	//��ѧ���ഴ������ѧ����ʵ��������
	Student s1;
	s1.name = "����";
	s1.id = 20230002;
	s1.show();
	s1.setName("����");
	s1.show();


	Person p1;
	p1.m_Name = "����";
	// p1.m_Car = "����"; ����Ȩ�����ݣ�������ʲ���
	// p1.m_Password = 12123; ˽��Ȩ�����ݡ�������ʲ���
	p1.func();

	system("pause");

	return 0;
}