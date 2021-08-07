#include"speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}

//��ʼ������������
void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_Speaker.clear();
	this->m_record.clear();

	//��ʼ����������
	this->m_Index = 1;
}

//��������ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker s;
		s.m_name = "ѡ��";
		s.m_name += nameSeed[i];
		for (int j = 0; j < 2; j++)
		{
			s.m_score[j] = 0;
		}

		//����ѡ�ֱ�� �����뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֱ���Լ���Ӧѡ�� ��ӵ�map������
		this->m_Speaker.insert( make_pair(i + 10001, s) );
	}
}

//��ʾ�˵�
void SpeechManager::showMenus()
{
	cout << "***************************************" << endl;
	cout << "*********** ��ӭ�μ��ݽ����� ***********" << endl;
	cout << "*********** 1. ��ʼ�ݽ����� ************" << endl;
	cout << "*********** 2. �鿴�����¼ ************" << endl;
	cout << "*********** 3. ��ձ�����¼ ************" << endl;
	cout << "*********** 0. �˳��������� ************" << endl;
	cout << "***************************************" << endl;
	cout << endl;
}

//��ʼ����
void SpeechManager::startSpeech()
{
	for (; this->m_Index < 3; this->m_Index++)
	{
		//1. ��ǩ
		this->speechDraw();
		//2. ����
		this->speechContest();
		//3. ��ʾ���
		this->showResult();

		system("cls");
		this->showMenus();
	}

	//�������ս��
	this->saveResult();
	cout << "�����������" << endl;
	
	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��<" << this->m_Index << ">�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "--------------------------" << endl;
	cout << "�ݽ�˳������" << endl;

	if (this->m_Index == 1)
	{
		//��һ��
		random_shuffle(this->v1.begin(), this->v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ���
		random_shuffle(this->v2.begin(), this->v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;
	system("pause");
}

//����
void SpeechManager::speechContest()
{
	cout << "\n��<" << this->m_Index << ">�ֱ�����ʽ��ʼ" << endl;
	cout << "--------------------------" << endl;

	//��ʱ�������С��ɼ�
	multimap<double, int, greater<double>> groupScore;
	int num = 0; //��¼��Ա���� 6��һ��
	int count = 0;

	//����������Ա����
	vector<int> v_Src;
	(this->m_Index == 1) ? (v_Src = this->v1) : (v_Src = this->v2);

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		//��ί���
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}

		//�������
		sort(d.begin(), d.end(), greater<double>()); 

		//ȥ�������ͷ�
		d.pop_front();
		d.pop_back();

		//��ƽ����
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//��ƽ���ַ���map������
		this->m_Speaker[*it].m_score[this->m_Index - 1] = avg;

		//��ƽ���ַ�����ʱ������
		groupScore.insert(make_pair(avg, *it));

		//ÿ6��ȡǰ3��
		num++;
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "���������: " << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end(); it++, count++)
			{
				cout << "��ţ�" << it->second << "\t������" << this->m_Speaker[it->second].m_name
					<< "\t������" << it->first << endl;
				//ȡ��ǰ����
				if (count < 3)
				{
					(this->m_Index == 1) ? (this->v2.push_back(it->second)) : (this->v3.push_back(it->second));
				}
			}
			cout << endl;

			//С���������
			groupScore.clear();
			count = 0;
		}
	}

	cout << "��<" << this->m_Index << ">�ֱ������" << endl;
	cout << "--------------------------" << endl;
	system("pause");
}

//��ʾ���
void SpeechManager::showResult()
{
	//��ʾ����ѡ����Ϣ
	cout << "\n��" << this->m_Index << "�ֱ���������Ա��" << endl;

	vector<int> v;
	(this->m_Index == 1) ? (v = this->v2) : (v = this->v3);
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "��ţ�" << *it << "\t������" << this->m_Speaker[*it].m_name
			<< "\t������" << this->m_Speaker[*it].m_score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
}

//����
void SpeechManager::saveResult()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //������ķ�ʽ���ļ� д�ļ�

	//��ÿ���˵�����д���ļ���
	for (vector<int>::iterator it = this->v3.begin(); it != this->v3.end(); it++)
	{
		ofs << *it << ","
			<< this->m_Speaker[*it].m_score[this->m_Index-2] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();
	cout << "��¼�Ѿ�����" << endl;
	this->fileIsEmpty = false;
}

//�������������¼
void SpeechManager::loadRecord()
{
	ifstream ifs;
	ifs.open("speech.csv", ios::in); //���ļ�

	//�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ����ڲ�Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch); //�������ȡ�ĵ����ַ� �Ż���

	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string> v;
		int pos = -1; //�鵽 , λ�õı���
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ�
				break;
			}
			//�ҵ���
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

//�鿴���������¼
void SpeechManager::showRecord()
{
	//�ļ������ڻ�Ϊ��
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
		return;
	}

	//�ļ����ڲ�Ϊ��
	for (int i = 0; i < this->m_record.size(); i++)
	{
		cout << "��" << i+1 << "��" << endl;
		cout << "�ھ���ţ�" << this->m_record[i][0] << "\t������" << this->m_record[i][1] << endl;
		cout << "�Ǿ���ţ�" << this->m_record[i][2] << "\t������" << this->m_record[i][3] << endl;
		cout << "������ţ�" << this->m_record[i][4] << "\t������" << this->m_record[i][5] << endl;
		cout << endl;
	}
}

//��������¼
void SpeechManager::clearRecord()
{
	cout << "�����Ҫ��������¼��" << endl;
	cout << "1 - ȷ��" << endl;
	cout << "2 - ȡ��" << endl;
	int choice = 0;
	cin >> choice;

	switch (choice)
	{
	case 1:
		if (this->fileIsEmpty)
		{
			cout << "�ļ������ڻ�Ϊ��" << endl;
		}
		else
		{
			ofstream ofs("speech.csv", ios::trunc);
			ofs.close();
			this->initSpeech();
			this->createSpeaker();
			this->loadRecord();
			cout << "��ճɹ�" << endl;
		}
		break;
	case 2:
		break;
	default:
		cout << "�޷�ʶ���ѡ��" << endl;
		break;
	}

}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��������
SpeechManager::~SpeechManager()
{

}