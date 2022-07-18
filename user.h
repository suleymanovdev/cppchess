#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
	This is .h file with user classe settings.
*/

enum Play
{
	WHITE, // 0
	BLACK  // 1
};

class User
{
    string username; 
    string password;
    int level;
	int id;
    bool regbool;
public:
	User()
	{
        regbool = false;
		level = 0;
		id = 0;
	}

	void set_username(string username)
	{
		this->username = username;
	}

	void set_password(string password)
	{
		this->password = password;
	}

	void set_level(int level)
	{
		this->level = level;
	}

    void set_regbool(bool regbool)
    {
        this->regbool = regbool;
    }

	string get_username()
	{
		return username;
	}

	string get_password()
	{
		return password;
	}

	int get_level()
	{
		return level;
	}

    bool get_regbool()
    {
        return regbool;
    }

	void inf0()
	{
		cout << "USER PROFILE (INFO)" << endl;
		cout << endl;
		cout << "USERNAME: " << this->username << endl;
		cout << "PASSWORD: " << this->password << endl;
		cout << "CHESS LEVEL: " << this->level << endl;
	}
};