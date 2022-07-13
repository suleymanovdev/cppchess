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
    int start_position_x;
    int start_position_y;
public:
    void set_color(string color)
    {
        this->color = color;
    }
    
    void set_weight(int weight)
    {
        this->weight = weight;
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

	virtual void turn() = 0; 
};