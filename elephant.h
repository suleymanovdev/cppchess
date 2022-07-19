#include <iostream>
#include <string>
using namespace std;

class Elephant : public Figure
{
public:
    void info() override
    {
        cout << endl << "CHOOSE FOR ELEPHANT" << endl << endl;
        cout << "1) Diagonal Right." << endl;
        cout << endl;
        cout << "2) Diagonal Left." << endl;
        cout << endl;
        cout << "3) Diagonal Down-Right." << endl;
        cout << endl;
        cout << "4) Diagonal Down-Left." << endl;
    }

    void posch(int x, int y) override
    {

    }
};