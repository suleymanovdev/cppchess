#include <iostream>
#include <string>
using namespace std;

class Rook : public Figure 
{
public:
	void set_first_action(bool first_action) override {}
	bool get_first_action() override { return false; }
	void info()	{ cout << "NAME: " << get_name() << endl; cout << "WEIGHT: " << get_weight() << endl; }
};
