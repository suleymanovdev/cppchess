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

	void posch(int y, int x) override
	{
		// cout << "X: " << x << endl;
		// cout << "Y: " << y << endl;

		this->x = x;
		this->y = y;
	}
};