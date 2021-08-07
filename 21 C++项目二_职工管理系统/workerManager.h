#pragma once // ��ֹͷ�ļ��ظ�����
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FileName "workerFile.txt"

class workerManager
{
public:	
	int m_WorkerNum; //��¼ְ������
	Worker** m_WorkerArray; //ְ������ָ��
	bool m_FileIsEmpty; //��־�ļ��Ƕ�Ϊ��

	//���캯��
	workerManager();

	//��������
	~workerManager();

	//��ʾ�˵�
	void showMenu();

	//�˳�ϵͳ
	void exitSystem();

	//���ְ��
	void addWorker();

	//�����ļ�
	void save();

	//ͳ������
	int getWorkerNum();

	//��ʼ������
	void initWorker();

	//��ʾְ��
	void showWorker();

	//�ж�ְ���Ƿ���� ���ڷ���λ�� �����ڷ���-1
	int IsExist(int id);

	//ɾ��ְ��
	void deleteWorker();

	//�޸�ְ��
	void modWorker();

	//����ְ��
	void findWorker();

	//����ְ��
	void sortWorker();

	//����ļ�
	void clearFile();
};