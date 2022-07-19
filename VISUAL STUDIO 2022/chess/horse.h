#include <iostream>
#include <string>
using namespace std;

class Horse : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR HORSE" << endl << endl;
    }

	void posch(int x, int y) override
	{
		
	}
};