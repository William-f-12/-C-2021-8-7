#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;
#include"globalFile.h"

class Order
{
public:

	//���캯��
	Order();

	//����ԤԼ��¼
	void updateOrder();

	//ԤԼ��¼����
	int m_size;

	//����ԤԼ��¼
	map<int, map<string, string>> m_allOrders;
};