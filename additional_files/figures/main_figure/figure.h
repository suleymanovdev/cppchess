#include <iostream>
#include <string>
using namespace std;

/*
	This is .h file with figure base-classe settings.
*/

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

    void set_name(string name)
    {
        this->name = name;
    }

    string get_name()
    {
        return this->name;
    }

    string get_color()
    {
        return this->color;
    }

    int get_weight()
    {
        return this->weight;
    }
};