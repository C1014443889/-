#pragma once

#include<iostream>
using namespace std;

//身份抽象类（抽象出共性）
class Identity
{
public:

	//操作菜单（纯虚函数---子类会重写父类的纯虚函数）
	virtual void operMenu() = 0;

	string m_Name; //用户名
	string m_Pwd;  //密码
};