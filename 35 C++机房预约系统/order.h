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

	//构造函数
	Order();

	//更新预约记录
	void updateOrder();

	//预约记录个数
	int m_size;

	//所有预约记录
	map<int, map<string, string>> m_allOrders;
};