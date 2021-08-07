#include"speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
}

//初始化容器和属性
void SpeechManager::initSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_Speaker.clear();
	this->m_record.clear();

	//初始化比赛轮数
	this->m_Index = 1;
}

//创建比赛选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker s;
		s.m_name = "选手";
		s.m_name += nameSeed[i];
		for (int j = 0; j < 2; j++)
		{
			s.m_score[j] = 0;
		}

		//创建选手编号 并放入到v1容器中
		this->v1.push_back(i + 10001);

		//选手编号以及对应选手 添加到map容器中
		this->m_Speaker.insert( make_pair(i + 10001, s) );
	}
}

//显示菜单
void SpeechManager::showMenus()
{
	cout << "***************************************" << endl;
	cout << "*********** 欢迎参加演讲比赛 ***********" << endl;
	cout << "*********** 1. 开始演讲比赛 ************" << endl;
	cout << "*********** 2. 查看往届记录 ************" << endl;
	cout << "*********** 3. 清空比赛记录 ************" << endl;
	cout << "*********** 0. 退出比赛程序 ************" << endl;
	cout << "***************************************" << endl;
	cout << endl;
}

//开始比赛
void SpeechManager::startSpeech()
{
	for (; this->m_Index < 3; this->m_Index++)
	{
		//1. 抽签
		this->speechDraw();
		//2. 比赛
		this->speechContest();
		//3. 显示结果
		this->showResult();

		system("cls");
		this->showMenus();
	}

	//保存最终结果
	this->saveResult();
	cout << "本届比赛结束" << endl;
	
	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第<" << this->m_Index << ">轮比赛选手正在抽签" << endl;
	cout << "--------------------------" << endl;
	cout << "演讲顺序如下" << endl;

	if (this->m_Index == 1)
	{
		//第一轮
		random_shuffle(this->v1.begin(), this->v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮
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

//比赛
void SpeechManager::speechContest()
{
	cout << "\n第<" << this->m_Index << ">轮比赛正式开始" << endl;
	cout << "--------------------------" << endl;

	//临时容器存放小组成绩
	multimap<double, int, greater<double>> groupScore;
	int num = 0; //记录人员个数 6人一组
	int count = 0;

	//创建比赛人员容器
	vector<int> v_Src;
	(this->m_Index == 1) ? (v_Src = this->v1) : (v_Src = this->v2);

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		//评委打分
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}

		//排序分数
		sort(d.begin(), d.end(), greater<double>()); 

		//去除最高最低分
		d.pop_front();
		d.pop_back();

		//求平均分
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//将平均分放入map容器里
		this->m_Speaker[*it].m_score[this->m_Index - 1] = avg;

		//将平均分放入临时容器中
		groupScore.insert(make_pair(avg, *it));

		//每6人取前3名
		num++;
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "组比赛名次: " << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end(); it++, count++)
			{
				cout << "编号：" << it->second << "\t姓名：" << this->m_Speaker[it->second].m_name
					<< "\t分数：" << it->first << endl;
				//取走前三名
				if (count < 3)
				{
					(this->m_Index == 1) ? (this->v2.push_back(it->second)) : (this->v3.push_back(it->second));
				}
			}
			cout << endl;

			//小组容器清空
			groupScore.clear();
			count = 0;
		}
	}

	cout << "第<" << this->m_Index << ">轮比赛完毕" << endl;
	cout << "--------------------------" << endl;
	system("pause");
}

//显示结果
void SpeechManager::showResult()
{
	//显示晋级选手信息
	cout << "\n第" << this->m_Index << "轮比赛晋级人员：" << endl;

	vector<int> v;
	(this->m_Index == 1) ? (v = this->v2) : (v = this->v3);
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号：" << *it << "\t姓名：" << this->m_Speaker[*it].m_name
			<< "\t分数：" << this->m_Speaker[*it].m_score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
}

//保存
void SpeechManager::saveResult()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //用输出的方式打开文件 写文件

	//将每个人的数据写入文件中
	for (vector<int>::iterator it = this->v3.begin(); it != this->v3.end(); it++)
	{
		ofs << *it << ","
			<< this->m_Speaker[*it].m_score[this->m_Index-2] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();
	cout << "记录已经保存" << endl;
	this->fileIsEmpty = false;
}

//加载往届比赛记录
void SpeechManager::loadRecord()
{
	ifstream ifs;
	ifs.open("speech.csv", ios::in); //读文件

	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件清空情况
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件存在不为空
	this->fileIsEmpty = false;
	ifs.putback(ch); //将上面读取的单个字符 放回来

	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string> v;
		int pos = -1; //查到 , 位置的变量
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//没有找到
				break;
			}
			//找到了
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

//查看往届比赛记录
void SpeechManager::showRecord()
{
	//文件不存在或为空
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
		return;
	}

	//文件存在不为空
	for (int i = 0; i < this->m_record.size(); i++)
	{
		cout << "第" << i+1 << "届" << endl;
		cout << "冠军编号：" << this->m_record[i][0] << "\t分数：" << this->m_record[i][1] << endl;
		cout << "亚军编号：" << this->m_record[i][2] << "\t分数：" << this->m_record[i][3] << endl;
		cout << "季军编号：" << this->m_record[i][4] << "\t分数：" << this->m_record[i][5] << endl;
		cout << endl;
	}
}

//清空往届记录
void SpeechManager::clearRecord()
{
	cout << "您真的要清空往届记录吗？" << endl;
	cout << "1 - 确认" << endl;
	cout << "2 - 取消" << endl;
	int choice = 0;
	cin >> choice;

	switch (choice)
	{
	case 1:
		if (this->fileIsEmpty)
		{
			cout << "文件不存在或为空" << endl;
		}
		else
		{
			ofstream ofs("speech.csv", ios::trunc);
			ofs.close();
			this->initSpeech();
			this->createSpeaker();
			this->loadRecord();
			cout << "清空成功" << endl;
		}
		break;
	case 2:
		break;
	default:
		cout << "无法识别的选项" << endl;
		break;
	}

}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//析构函数
SpeechManager::~SpeechManager()
{

}