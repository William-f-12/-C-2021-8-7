#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	//有参构造
	myArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	myArray(const myArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止浅拷贝
	myArray& operator=(const myArray& arr)
	{
		//先判断原来堆区是否有数据 如果有先释放
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

	//尾插法
	void pushBack(const T val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size) { return; }

		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void popBack()
	{
		//让用户访问不到最后一个元素 即为尾删法 逻辑删除
		if (this->m_Size == 0) { return; }
		this->m_Size--;
	}

	//通过下表方式访问数组中的元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~myArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //指针指向堆区开辟的真实数组
	int m_Capacity; //数组容量
	int m_Size; //数组大小
};