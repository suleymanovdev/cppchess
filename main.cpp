#include <iostream>
#include <string>
#include "adtf/classes.h"
#include "adtf/func.h"
#include "adtf/menus.h"
using namespace std;

int main()
{
    /*
      User settings.
    */
  
    User user;
    string username;
    string password;
    int level;

    /*
      Settings.
    */

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
  		cout << "	Enter your choose(menu):~> ";
  		cin >> choose;
		if (choose == 1)
		{
			int choose_reg;
			clear(sys_name);
			banner();
			reg_and_login();
			cout << " Enter your choose(reg):~> ";
			cin >> choose_reg;
			if (choose_reg == 1)
			{
				cout << " Enter your name:~> ";
				cin >> username;
				cout << " Enter your pass:~> ";
				cin >> password;
				cout << " Enter your level:~> ";
				cin >> level;

				user.set_username(username);
				user.set_password(password);
				user.set_level(level);

				user.inf0();

				press_to_continue();
			}
			else if (choose_reg == 2)
			{
				continue;
			}
			else if (choose_reg == 3)
			{
				continue;
			}
			else
			{
				cout << "Err: Reg (!)" << endl;
			}
		}
		else if (choose == 2)
		{
			clear(sys_name);
			banner();
			boardinfo();
			press_to_continue();
		}
		else if (choose == 3)
		{
			clear(sys_name);
			banner();
			about();
			press_to_continue();
		}
		else if (choose == 4)
		{
			clear(sys_name);
			banner();
			license();
			press_to_continue();
		}
		else if (choose == 5)
		{
			clear(sys_name);
			banner();
			cout << "Good bye! Have a nice day!" << endl;
			exit(0);
		}
		else 
		{
			cout << "Err: Main (!)" << endl;
		}
	}
  
    return 0;
} 
