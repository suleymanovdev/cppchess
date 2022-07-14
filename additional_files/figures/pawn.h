#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Pawn : public Figure
{
private:
	int start_x;
	int start_y;

	int x;
	int y;
public:
    Pawn()
	{
		start_x = 0;
		start_y = 0;

		x = 0;
		y = 0;
	}

	void set_start_x(int start_x)
	{
		this->start_x = start_x;
	}

	void set_start_y(int start_y)
	{
		this->start_y = start_y;
	}

	void set_x(int x)
	{
		this->x = x;
	}

	void set_y(int y)
	{
		this->y = y;
	}

	int get_start_x()
	{
		return start_x;
	}

	int get_start_y()
	{
		return start_y;
	}

	int get_x()
	{
		return x;
	}

	int get_y()
	{
		return y;
	}
};