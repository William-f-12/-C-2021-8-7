#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
#include"computerRoom.h"
#include"order.h"
#include"identity.h"
#include"globalFile.h"

//ѧ����
class Student : public Identity
{
public:

	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name, string password);

	//�˵�����
	virtual void showMenus();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_id;

	//������Ϣ
	vector<ComputerRoom> vCom;
};