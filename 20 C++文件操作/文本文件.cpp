#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//�ļ����ͷ�Ϊ����
//1. �ı��ļ� - �ļ����ı���ASCII����ʽ�洢�ڼ������
//2. �������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ������ �û�һ�㲻��ֱ�Ӷ�������

//�����ļ���������
//1. ofstream��д����
//2. ifstream��������
//3. fstream����д����

//д�ļ�
void write()
{
	//1. ����ͷ�ļ�<fstream>

	//2. ����������
	ofstream ofs;

	//3. ���ļ� ofs.open(�ļ�·��, �򿪷�ʽ);
		// ios::in -	ֻ��
		// ios::out -	ֻд
		// ios::ate -	��ʼλ��Ϊ�ļ�β
		// ios::app -	׷��
		// ios::trunc - ����ļ����� ��ɾ�� �ٴ���
		// ios::binary -�����Ʒ�ʽ
		// �ļ��򿪷�ʽ�������ʹ�� ���� | ������
	ofs.open("test.txt", ios::out); 

	//4. д����
	ofs << "д�������" << endl;

	//5. �ر��ļ�
	ofs.close();
}

//���ļ�
void read()
{
	//1. ����ͷ�ļ�

	//2. ����������
	ifstream ifs;

	//3. ���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4. ������ - ���ַ�ʽ
	// ��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/

	// �ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/

	// ������
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}

	// ������
	/*char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}*/

	//5. �ر��ļ�
	ifs.close();
}

int main1()
{
	write();
	read();

	system("pause");
	return 0;
}