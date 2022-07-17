#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class King : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR KING" << endl << endl;
    }

	void posch(int x, int y) override
	{
		
	}
};