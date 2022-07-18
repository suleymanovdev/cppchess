#include <iostream>
#include <string>
// ADDITIONAL FILES
#include "menus.h"
#include "functions.h"
#include "user.h"
#include "figure.h"
// FIGURES
#include "pawn.h"
#include "horse.h"
#include "elephant.h"
#include "rook.h"
#include "queen.h"
#include "king.h"
using namespace std;

int main()
{
	// DATA FOR PROGRAMM
	int welcome_menu_choose = 0;
	int registration_menu_choose = 0;
	int menu_choose = 0;
	string sys;
	string username;
	string password;
	int level = 0;
	string registration;

	// MAIN CODE
	User user;

	cout << "Guten Tag! Enter your system name (Windows/Linux):~> ";
	cin >> sys;

	while (true)
	{
		if (user.get_regbool() == false)
		{
			clear(sys);
			banner();
			welcome();
			cout << "	choose(welcome):~> ";
			cin >> welcome_menu_choose;
			switch (welcome_menu_choose)
			{
			case 1:
				clear(sys);
				banner();
				reg_and_login();
				cout << "	choose(registration):~> ";
				cin >> registration_menu_choose;
				switch (registration_menu_choose)
				{
				case 1:
					clear(sys);
					banner();
					cout << endl;
					cout << "Enter username (ex: Grosmaster2000):~> " << endl;
					cin >> username;
					clear(sys);
					banner();
					cout << endl;
					cout << "Enter password: (ex: qwerty+_chess):~> " << endl;
					cin >> password;
					clear(sys);
					banner();
					cout << endl;
					cout << "Enter chess level (ex: 1012):~> " << endl;
					cin >> level;

					user.set_username(username);
					user.set_password(password);
					user.set_level(level);

					clear(sys);
					banner();
					cout << endl;
					user.inf0();
					cout << endl;
					cout << "Continue registration (y/n):~> ";
					cin >> registration;
					if (registration == "y")
					{
						user.set_regbool(true);
					}
					else if (registration == "n")
					{
						cout << "Starting registration again....." << endl;
						continue;
					}
					else
					{
						cout << "Err: Registration Process." << endl;
						error();
					}
					press_to_continue();
					break;
				case 2:
					user.set_username("Guest_Grassmaster");
					user.set_password("guest123qwerty");
					user.set_level(0);

					clear(sys);
					banner();
					cout << endl;
					user.inf0();
					cout << endl;
					cout << "Continue registration (y/n):~> ";
					cin >> registration;
					if (registration == "y")
					{
						user.set_regbool(true);
					}
					else if (registration == "n")
					{
						cout << "Starting registration again....." << endl;
						continue;
					}
					else
					{
						cout << "Err: Registration Process." << endl;
						error();
					}
					press_to_continue();
					break;
				case 3:
					break;
				default:
					cout << "Err: Registration." << endl;
					error();
					press_to_continue();
					break;
				}
				break;
			case 2:
				clear(sys);
				banner();
				boardinfo();
				cout << endl;
				press_to_continue();
				break;
			case 3:
				clear(sys);
				banner();
				about();
				cout << endl;
				press_to_continue();
				break;
			case 4:
				clear(sys);
				banner();
				license();
				cout << endl;
				press_to_continue();
				break;
			case 5:
				clear(sys);
				cout << "Auf Wiedersehen!" << endl;
				exit(0);
			default:
				cout << "Err: Welcome." << endl;
				error();
				press_to_continue();
				break;
			}
		}
		else
		{
			clear(sys);
			banner();
			menu();
			cout << "	choose(menu):~> ";
			cin >> menu_choose;
			switch (menu_choose)
			{
			default:
				break;
			}
		}
	}

	return 0;
}