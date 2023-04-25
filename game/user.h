#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Play
{
	WHITE, // 0
	BLACK  // 1
};

class User
{
    string USERNAME; 
    string PASSWORD;
    int LEVEL;
	int ID;
    bool REGBOOL;
public:
	string SYSTEM; // User (Player's) Current Operation System.
	User()
	{
		SYSTEM = "windows";
        REGBOOL = false;
		LEVEL = 0;
		ID = 0;
	}

	void set_username(string username)
	{
		this->USERNAME = username;
	}

	void set_password(string password)
	{
		this->PASSWORD = password;
	}

	void set_level(int level)
	{
		this->LEVEL = level;
	}

    void set_regbool(bool regbool)
    {
        this->REGBOOL = regbool;
    }

	string get_username()
	{
		return USERNAME;
	}

	string get_password()
	{
		return PASSWORD;
	}

	int get_level()
	{
		return LEVEL;
	}

    bool get_regbool()
    {
        return REGBOOL;
    }
    
	void inf0()
	{
		cout << "USER PROFILE (INFO)" << endl;
		cout << endl;
		cout << "USERNAME: " << this->USERNAME << endl;
		cout << "PASSWORD: " << this->PASSWORD << endl;
		cout << "CHESS LEVEL: " << this->LEVEL << endl;
		cout << "SYSTEM: " << this->SYSTEM << endl;
	}
};

class SecondUser
{
public:
	string USERNAME; 
    int LEVEL;
	SecondUser()
	{
		USERNAME = "Second User";
		LEVEL = 0;
	}
};

struct Statistics
{
	int WINS = 0;
	int LOST = 0;

	void sh0w()
	{
		// WINS Stats.
		cout << "WIN GAMES: ";
		for (int i = 0; i < WINS; i++)
		{
			cout << "[+]";
		}
		cout << endl;
		// LOST Stats.
		cout << "LOST GAMES: ";
		for (int i = 0; i < LOST; i++)
		{
			cout << "[-]";
		}
		cout << endl;
	}
};