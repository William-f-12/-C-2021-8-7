#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//ע�⣺����ṹ��Teacherʱ������Сдt��ͷ���ᵼ�´���ԭ��δ֪

//ѧ���ṹ��
struct Student
{
	string name;
	int score;
};

//��ʦ�ṹ��
struct Teacher
{
	string name;
	Student sArray[5];
};

//����ʦѧ����ֵ�ĺ���
void allocateSpace(Teacher tArray[], int len)
{
	string name = "ABCDE";
	string tName = "T_";
	string sName = "S_";
	for (int i = 0; i < len; i++) {
		tArray[i].name = tName + name[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = sName + name[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

//��ӡ������Ϣ
void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������ " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ�������� " << tArray[i].sArray[j].name
				<< " ѧ���ɼ��� " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1. ����3����ʦ������
	Teacher tArray[3];

	//2. ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ������Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);

	//3. ��ӡ������ʦѧ������Ϣ
	printInfo(tArray, len);

	system("pause");

	return 0;
}