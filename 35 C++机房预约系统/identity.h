#pragma once
#include<iostream>
using namespace std;

//��ݻ���
class Identity
{
public:

	//�����˵� ��������
	virtual void showMenus() = 0;

	//�û���
	string m_name;
	//����
	string m_password;
};