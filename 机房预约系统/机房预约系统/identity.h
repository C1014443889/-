#pragma once

#include<iostream>
using namespace std;

//��ݳ����ࣨ��������ԣ�
class Identity
{
public:

	//�����˵������麯��---�������д����Ĵ��麯����
	virtual void operMenu() = 0;

	string m_Name; //�û���
	string m_Pwd;  //����
};