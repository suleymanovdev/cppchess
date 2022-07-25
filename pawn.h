#include <iostream>
#include <string>
using namespace std;

class Pawn : public Figure 
{
private:
	bool first_action;
public:
	Pawn()
	{
		first_action = false;
	}
	void set_first_action(bool first_action) override { this->first_action = first_action; }
	bool get_first_action() override { return this->first_action; }
	void info()	{ cout << "NAME: " << get_name() << endl;	cout << "WEIGHT: " << get_weight() << endl;	}
};
