#include<iostream>
#include<string>
using namespace std;

//����Ա��������Ϊ˽��
//�ŵ�1�������Լ����ƶ�дȨ��
//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person
{
public:
	//д����
	void setName(string name)
	{
		m_Name = name;
	}
	//������
	string getName()
	{
		return m_Name;
	}
	//�������� ��Χ������0-150
	void setAge(int age)
	{
		if (age >= 0 && age <= 150) {
			m_Age = age;
		}
		else {
			m_Age = 0;
			cout << "�Ƿ�����" << endl;
		}
	}
	//��ȡ����
	int getAge()
	{
		//m_Age = 0; //��ʼ��Ϊ0��
		return m_Age;
	}
	//��������
	void setLover(string name)
	{
		Lover = name;
	}

private:
	//���� �ɶ���д
	string m_Name;
	//���� ֻд
	string Lover;
	//���� ֻ��
	int m_Age;
};

int main3()
{
	Person p;
	p.setName("����");
	p.setAge(160);
	cout << "����Ϊ" << p.getName() << endl;
	cout << "����Ϊ" << p.getAge() << endl;
	p.setLover("wyr");

	system("pause");

	return 0;
}