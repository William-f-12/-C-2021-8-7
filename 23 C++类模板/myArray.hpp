#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	//�вι���
	myArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	myArray(const myArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ����
	myArray& operator=(const myArray& arr)
	{
		//���ж�ԭ�������Ƿ������� ��������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capacity = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨
	void pushBack(const T val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) { return; }

		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void popBack()
	{
		//���û����ʲ������һ��Ԫ�� ��Ϊβɾ�� �߼�ɾ��
		if (this->m_Size == 0) { return; }
		this->m_Size--;
	}

	//ͨ���±�ʽ���������е�Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~myArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //ָ��ָ��������ٵ���ʵ����
	int m_Capacity; //��������
	int m_Size; //�����С
};