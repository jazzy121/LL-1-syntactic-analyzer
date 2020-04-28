#pragma once
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Grammar
{
protected:	
	vector<string> vg;      //����ʽ
	map<char, int> mv;     //���ս�����ս����ֵ��
	string grammar[10];     //�ķ�
	string first[100];      //first��
	string follow[100];     //follow��
	char vn[10];            //���ս����
	char vt[10];            //�ս����
	int num;                //�ķ�����
	int numvn;              //���ս������
	int numvt;              //�ս������
	int table[100][100];    //����ʽ��
	string sentence;        //����
public:
	Grammar();
	void init();
	void remove_leftrecursion();
	void remove_leftcommon_factor();
	void getfirst();
	void getfollow();
	void gettable();
	bool if_vn(char);
	bool if_vt(char);
	bool if_LL1();
	string get_f(int i,int k,bool &empty);
	void analyze();
};
Grammar::Grammar()
{
	num = 0;
	numvt = 0;
	numvn = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			table[i][j] = 100;
	}
}
