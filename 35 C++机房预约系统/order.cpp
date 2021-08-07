#include"order.h"

//字符串操作
void addMap(string& str, map<string, string>& m)
{
	string key;
	string value;
	int pos = str.find(":");
	if (pos != -1)
	{
		key = str.substr(0, pos);
		value = str.substr(pos + 1, str.size() - pos);
		m.insert(make_pair(key, value));
	}
}

//构造函数
Order::Order() 
{
	this->m_size = 0;
	this->m_allOrders.clear();

	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	//预约信息
	string date;
	string interval;
	string roomId;
	string stuId;
	string stuName;
	string status;

	while (ifs >> date && ifs >> interval && ifs >> roomId && ifs >> stuId && ifs >> stuName && ifs >> status)
	{
		map<string, string> m;

		//填充信息
		addMap(date, m);
		addMap(interval, m);
		addMap(roomId, m);
		addMap(stuId, m);
		addMap(stuName, m);
		addMap(status, m);

		this->m_allOrders.insert(make_pair(this->m_size, m));
		this->m_size++;
	}
	ifs.close();
}

//更新预约记录
void Order::updateOrder()
{
	if (this->m_size == 0)
	{
		return;
	}

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::out | ios::trunc);

	for (int i = 0; i < this->m_size; i++)
	{
		ofs << "date:" << this->m_allOrders[i]["date"] << " ";
		ofs << "interval:" << this->m_allOrders[i]["interval"] << " ";
		ofs << "room:" << this->m_allOrders[i]["room"] << " ";
		ofs << "stuId:" << this->m_allOrders[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_allOrders[i]["stuName"] << " ";
		ofs << "status:" << this->m_allOrders[i]["status"] << endl;
	}
}