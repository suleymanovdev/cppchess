#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Queen : public Figure
{
private:
	int start_x;
	int start_y;

	int x;
	int y;
public:
    Queen()
	{
		x = 0;
		y = 0;
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

	void posch(int x, int y) override
	{
		
	}
};