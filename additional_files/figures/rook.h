#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Rook : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR ROOK" << endl << endl;
    }

	void posch(int x, int y) override
	{
		
	}
};