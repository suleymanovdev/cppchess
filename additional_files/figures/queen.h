#include <iostream>
#include <string>
// #include "main_figure/figure.h"
using namespace std;

class Queen : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR QUEEN" << endl << endl;
    }

	void posch(int x, int y) override
	{
		
	}
};