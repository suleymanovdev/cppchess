#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Pawn : public Figure
{
public:
	void posch(int y, int x) override
	{
		// cout << "X: " << x << endl;
		// cout << "Y: " << y << endl;

		set_x(x);
		set_y(y);
	}
};
