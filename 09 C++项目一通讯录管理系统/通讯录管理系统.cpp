#include<iostream>
#include<string>
using namespace std;
#define MAX 100 //����곣���������зֺ�

//��ϵ�˽ṹ��
struct Person
{
	string m_Name; //����
	int m_Sex; //�Ա�:1-�� 2-Ů
	int m_Age; //����
	string m_Phone; //�绰
	string m_Addr; //��ַ
};


//ͨѶ¼�ṹ��
struct Addressbooks
{
	//��ϵ������
	Person personArray[ MAX ];

	//��ϵ�˸���
	int m_Size;
};


//�˵�����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1. �����ϵ�� *****" << endl;
	cout << "***** 2. ��ʾ��ϵ�� *****" << endl;
	cout << "***** 3. ɾ����ϵ�� *****" << endl;
	cout << "***** 4. ������ϵ�� *****" << endl;
	cout << "***** 5. �޸���ϵ�� *****" << endl;
	cout << "***** 6. �����ϵ�� *****" << endl;
	cout << "***** 0. �˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}


//�����ϵ���Ƿ���ڣ����ڷ��ؾ���λ�ã������ڷ���-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}


//��ʾ������ϵ��
void showAPerson(Addressbooks* abs, int pos)
{
	cout << "������" << abs->personArray[pos].m_Name << "\t";
	cout << "�Ա�" << (abs->personArray[pos].m_Sex == 1 ? "��" : "Ů") << "\t";
	cout << "���䣺" << abs->personArray[pos].m_Age << "\t";
	cout << "�绰��" << abs->personArray[pos].m_Phone << "\t";
	cout << "��ַ��" << abs->personArray[pos].m_Addr << "\n\n";
}


//1. �����ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else {
		//�����ϵ��
		string name; //����
		cout << "������������" << endl;
		cin >> name;
		if (isExist(abs, name) != -1) {
			cout << "�Ѵ�����ϵ��" << endl;
			return;
		}
		abs->personArray[abs->m_Size].m_Name = name;

		int sex = 0; //�Ա�
		while (!(sex == 1 || sex == 2)) {
			cout << "�������Ա�" << endl;
			cout << "1 --- ��" << endl;
			cout << "2 --- Ů" << endl;
			cin >> sex;
		}
		abs->personArray[abs->m_Size].m_Sex = sex;

		int age = 0; //����
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		string phone; //�绰
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string address; //��ַ
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
	}
}


//2. ��ʾ��ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			showAPerson(abs, i);
		}
	}
}


//3. ɾ����ϵ��
void deletePerson(Addressbooks* abs)
{
	string name;
	cout << "������ɾ����ϵ��������" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		for (int i = ret; i < abs->m_Size - 1; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "�ɹ�ɾ����ϵ��" << endl;
	}
}


//4. ������ϵ��
void findPerson(Addressbooks* abs)
{
	string name;
	cout << "�����������ϵ��������" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		showAPerson(abs, ret);
	}
}


//5. �޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	string name;
	cout << "�������޸���ϵ��������" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		//�޸���ϵ��
		string name; //����
		cout << "������������" << endl;
		cin >> name;
		if (isExist(abs, name) != -1) {
			cout << "�Ѵ�����ϵ��" << endl;
			return;
		}
		abs->personArray[ret].m_Name = name;

		int sex = 0; //�Ա�
		while (!(sex == 1 || sex == 2)) {
			cout << "�������Ա�" << endl;
			cout << "1 --- ��" << endl;
			cout << "2 --- Ů" << endl;
			cin >> sex;
		}
		abs->personArray[ret].m_Sex = sex;

		int age = 0; //����
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone; //�绰
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string address; //��ַ
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
}


//6. �����ϵ��
void clearPerson(Addressbooks* abs)
{
	//Person person;
	//for (int i = 0; i < abs->m_Size; i++) {
	//	abs->personArray[i] = person;
	//}
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
}


int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ����Ա����
	abs.m_Size = 0;

	int select = 0; //�����û�ѡ������ı���

	while (true) {
		//��ʾ�˵�
		showMenu();

		cin >> select;

		switch (select) {
		case 1: //1. �����ϵ��
			addPerson(&abs);
			break;
		case 2: //2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //3. ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4: //4. ������ϵ��
			findPerson(&abs);
			break;
		case 5: //5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //6. �����ϵ��
			clearPerson(&abs);
			break;
		case 0: //0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			cout << "δ�ҵ���ѡ��" << endl;
			break;
		}

		system("pause"); //�밴���������
		system("cls"); //��������
	}
}