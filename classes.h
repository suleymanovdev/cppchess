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
    string level;
public:

};

class Figure
{
private:
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
};

class Rook : Figure
{
    
};

class Horse : Figure
{

};

class Officer : Figure
{

};

class Queen : Figure
{

};

class King : Figure
{

};