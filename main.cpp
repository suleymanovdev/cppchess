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

	cout << "Enter system name:~> ";
	cin >> sys_name;
	clear(sys_name);

    while (true)
	{
		clear(sys_name);
		banner();
		welcome();
		cout << endl;
		cout << "	Enter your choose:~> ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			int choose_reg;
			clear(sys_name);
			banner();
			reg_and_login();
			/*
                    1. Registration.
					2. Log In.
					3. Log In as Guest. (Beta)
					4. Back to menu.
			*/
			// cout << "	Enter your choose:~> ";
			// cin >> choose_reg;
			// switch (choose_reg)
			// {
			// case 1:
			// 	string username = "sudev";
			// 	string password = "passtest45";
			// 	int level = 1045;
			// 	addNewUser(user_arr, user_arr_size, username, password, level);
			// 	cout << user_arr[1].get_username();
			// 	press_to_continue();
			// 	break;
			// }
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
