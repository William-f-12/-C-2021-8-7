#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
#include"globalFile.h"

//����Ա��
class Manager : public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string password);

	//�˵�����
	virtual void showMenus();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void clearFile();

	//��ʼ������
	void initVector();

	//����ظ�(true��ʾ�ظ� false��ʾ���ظ�)
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//������Ϣ
	vector<ComputerRoom> vCom;
};