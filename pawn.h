#include <iostream>
#include <string>
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
		set_x(x);
		set_y(y);
	}
};
