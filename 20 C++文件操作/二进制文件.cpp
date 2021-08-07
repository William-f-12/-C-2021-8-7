#include<iostream>
#include<fstream>
using namespace std;

//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ� ostream& write(const char* buffer, int len);

//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ� istream& read(char* buffer, int len);

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void writeBinary()
{
	//1. ����ͷ�ļ�

	//2�� ����������
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3. ���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	//4. д�ļ�
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(p));

	//5. �ر��ļ�
	ofs.close();
}

void readBinary()
{
	//1. ����ͷ�ļ�

	//2�� ����������
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3. ���ļ� �ж��ļ��Ƿ�ɹ���
	//ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4. ���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "����: " << p.m_Name << " ����: " << p.m_Age << endl;

	//5. �ر��ļ�
	ifs.close();
}

int main()
{
	writeBinary();
	readBinary();

	system("pause");
	return 0;
}