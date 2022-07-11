#include <iostream>
#include <string>
using namespace std;

/*
	This is .h file with classes settings.
*/

class User
{
    string username; 
    string password;
    int level;
public:
	User()
	{
		level = 0;
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

	void inf0()
	{
		cout << "USER PROFILE (INFO)" << endl;
		cout << "USERNAME: " << this->username << endl;
		cout << "PASSWORD: " << this->password << endl;
		cout << "LEVEL: " << this->level << endl;
	}
};

class Figure
{
private:
    string name;
    string color;
    int weight;
public:
    void set_color(string color)
    {
        this->color = color;
    }
    
    void set_weight(int weight)
    {
        this->weight = weight;
    }

	virtual void turn() = 0; 
};

class Pawn : public Figure
{
private:

};

class Rook : public Figure
{
private:

public:

};

class Horse : public Figure
{
private:

public:

};

class Officer : public Figure
{
private:

public:

};

class Queen : public Figure
{
private:

public:

};

class King : public Figure
{
private:

public:

};
