#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
#include"point.h"
using namespace std;

//Բ��
class Circle
{
private:
	int m_R;
	Point m_Center;

public:
	void setR(int r); //���ð뾶

	int getR(); //��ȡ�뾶

	void setCenter(Point center); //����Բ��

	Point getCenter(); //��ȡԲ��
};