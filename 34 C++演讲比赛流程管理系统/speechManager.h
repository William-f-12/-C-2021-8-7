#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include"speaker.h"
using namespace std;

//�ݽ�����������
class SpeechManager
{
public:
	//��Ա����
	//��һ��ѡ�ֱ������
	vector<int> v1;

	//�ڶ���ѡ�ֱ������
	vector<int> v2;

	//ǰ����ѡ�ֱ������
	vector<int> v3;

	//��ű���Լ����ھ���ѡ������
	map<int, Speaker> m_Speaker;

	//��ű�������
	int m_Index;

	//�ļ�Ϊ�ձ�־
	bool fileIsEmpty;

	//�洢�����¼�õ�����
	map<int, vector<string>> m_record;

	
	//���캯��
	SpeechManager();

	//��ʼ������������
	void initSpeech();

	//��������ѡ��
	void createSpeaker();

	//��ʾ�˵�
	void showMenus();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ���
	void showResult();

	//����
	void saveResult();

	//�������������¼
	void loadRecord();

	//�鿴���������¼
	void showRecord();

	//��������¼
	void clearRecord();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();
};