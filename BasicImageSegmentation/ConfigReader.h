#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

typedef pair<string, vector<float>> SegReq;		// �ָ�������Ϣ���ָ��㷨��+�����б�

#define COMMENT_CHAR '#'

class ConfigReader
{
public:
	ConfigReader(void);
	ConfigReader(const string&);
	~ConfigReader(void);

	void GetSegRequire(vector<SegReq>& );

private:
	void ReadConfig();
	void Trim(string & str);
	bool IsSpace(char c);

	string m_filename;

	vector<SegReq> segList;
};
