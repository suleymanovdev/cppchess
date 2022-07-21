#include <iostream>
#include <string>
using namespace std;

class Queen : public Figure 
{
public:
	void info()
	{
		cout << "NAME: " << get_name() << endl;
		cout << "WEIGHT: " << get_weight() << endl;
	}
};
