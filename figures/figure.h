#include <iostream>
#include <string>
using namespace std;

class Figure
{
protected:
    string _id;
    string _name;
    int _price;
public:
    virtual void info();
    virtual void move();
};