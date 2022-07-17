#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Pawn : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR PAWN" << endl << endl;
        cout << "1) Forward." << endl;
        cout << endl;
        cout << "2) Right." << endl;
        cout << endl;
        cout << "3) Left." << endl;
    }

	void posch(int y, int x) override
	{
		// cout << "X: " << x << endl;
		// cout << "Y: " << y << endl;

		set_x(x);
		set_y(y);
	}
};
