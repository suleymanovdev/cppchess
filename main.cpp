#include <iostream>
#include <string>
#include "adtf/classes.h"
#include "adtf/func.h"
#include "adtf/menus.h"
using namespace std;

int main()
{
	/*
		Settings.
	*/

	int user_arr_size = 0;
	User* user_arr = new User[user_arr_size];
	int choose = 0;
	string sys_name;

	cout << "Enter system name:~> " << endl;
	cin >> sys_name;
	clear(sys_name);

    while (true)
	{
		clear(sys_name);
		banner();
		welcome();
		cin >> choose;
		switch (choose)
		{
		case 1:
			clear(sys_name);
			banner();
			reg_and_login();
			break;
		case 2:
			clear(sys_name);
			banner();
			boardinfo();
			press_to_continue();
			break;
		case 3:
			clear(sys_name);
			banner();
			about();
			press_to_continue();
			break;
		case 4:
			clear(sys_name);
			banner();
			license();
			press_to_continue();
			break;
		case 5:
			clear(sys_name);
			banner();
			cout << "Good bye! Have a nice day!" << endl;
			exit(0);
			break;
		default:
			break;
		}
	}
	
    return 0;
} 
