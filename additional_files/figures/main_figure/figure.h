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
	int x;
	int y;
    int weight = 0;
public:
	Figure()
	{
		x = 0;
		y = 0;
	}

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

	void set_x(int x)
	{
		this->x = x;
	}

	void set_y(int y)
	{
		this->y = y;
	}

	int get_x()
	{
		return x;
	}

	int get_y()
	{
		return y;
	}

    virtual void info() = 0;

    virtual void posch(int x, int y) = 0;
};