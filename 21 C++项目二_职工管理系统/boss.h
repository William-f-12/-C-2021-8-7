#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

class Boss : public Worker
{
public:
	//���캯��
	Boss(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ��Ϣ
	virtual string getDeptName();
};