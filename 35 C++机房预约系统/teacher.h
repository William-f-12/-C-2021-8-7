#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include"identity.h"
#include"order.h"

//��ʦ��
class Teacher : public Identity
{
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId, string name, string password);

	//�˵�����
	virtual void showMenus();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	//��ʦ���
	int m_empId;
};