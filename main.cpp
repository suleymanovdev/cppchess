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
	// Creating figures(objects)

	Pawn w_p1, w_p2, w_p3, w_p4, w_p5, w_p6, w_p7, w_p8, b_p1, b_p2, b_p3, b_p4, b_p5, b_p6, b_p7, b_p8;
	Horse w_h1, w_h2, b_h1, b_h2;
	Elephant w_e1, w_e2, b_e1, b_e2;
	Rook w_r1, w_r2, b_r1, b_r2;
	Queen w_Q, b_Q;
	King w_K, b_K;

	bool WKing = true;

	// Setting all settings on figures
	w_p1.set_name("w_p"); w_p1.set_color("white"); w_p1.set_weight(1);
	w_p2.set_name("w_p"); w_p2.set_color("white"); w_p2.set_weight(1);
	w_p3.set_name("w_p"); w_p3.set_color("white"); w_p3.set_weight(1);
	w_p4.set_name("w_p"); w_p4.set_color("white"); w_p4.set_weight(1);
	w_p5.set_name("w_p"); w_p5.set_color("white"); w_p5.set_weight(1);
	w_p6.set_name("w_p"); w_p6.set_color("white"); w_p6.set_weight(1);
	w_p7.set_name("w_p"); w_p7.set_color("white"); w_p7.set_weight(1);
	w_p8.set_name("w_p"); w_p8.set_color("white"); w_p8.set_weight(1);
	b_p1.set_name("b_p"); b_p1.set_color("black"); b_p1.set_weight(1);
	b_p2.set_name("b_p"); b_p2.set_color("black"); b_p2.set_weight(1);
	b_p3.set_name("b_p"); b_p3.set_color("black"); b_p3.set_weight(1);
	b_p4.set_name("b_p"); b_p4.set_color("black"); b_p4.set_weight(1);
	b_p5.set_name("b_p"); b_p5.set_color("black"); b_p5.set_weight(1);
	b_p6.set_name("b_p"); b_p6.set_color("black"); b_p6.set_weight(1);
	b_p7.set_name("b_p"); b_p7.set_color("black"); b_p7.set_weight(1);
	b_p8.set_name("b_p"); b_p8.set_color("black"); b_p8.set_weight(1);
	w_h1.set_name("w_h"); w_h1.set_color("white"); w_h1.set_weight(3);
	w_h2.set_name("w_h"); w_h2.set_color("white"); w_h2.set_weight(3);
	b_h1.set_name("b_h"); b_h1.set_color("black"); b_h1.set_weight(3);
	b_h2.set_name("b_h"); b_h2.set_color("black"); b_h2.set_weight(3);
	w_e1.set_name("w_e"); w_e1.set_color("white"); w_e1.set_weight(3);
	w_e2.set_name("w_e"); w_e2.set_color("white"); w_e2.set_weight(3);
	b_e1.set_name("b_e"); b_e1.set_color("black"); b_e1.set_weight(3);
	b_e2.set_name("b_e"); b_e2.set_color("black"); b_e2.set_weight(3);
	w_r1.set_name("w_r"); w_r1.set_color("white"); w_r1.set_weight(5);
	w_r2.set_name("w_r"); w_r2.set_color("white"); w_r2.set_weight(5);
	b_r1.set_name("b_r"); b_r1.set_color("black"); b_r1.set_weight(5);
	b_r2.set_name("b_r"); b_r2.set_color("black"); b_r2.set_weight(5);
	w_Q.set_name("w_Q"); w_Q.set_color("white"); w_Q.set_weight(9);
	b_Q.set_name("b_Q"); b_Q.set_color("black"); b_Q.set_weight(9);
	w_K.set_name("w_K"); w_K.set_color("white"); w_K.set_weight(0);
	b_K.set_name("b_K"); b_K.set_color("black"); b_K.set_weight(0);


	Figure* board_arr[8][8] = {
		{&b_r1, &b_h1, &b_e1, &b_Q, &b_K, &b_e2, &b_h2, &b_r2},
		{&b_p1, &b_p2, &b_p3, &b_p4, &b_p5, &b_p6, &b_p7, &b_p8},
		{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
		{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
		{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
		{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
		{&w_p1, &w_p2, &w_p3, &w_p4, &w_p5, &w_p6, &w_p7, &w_p8},
		{&w_r1, &w_h1, &w_e1, &w_Q, &w_K, &w_e2, &w_h2, &w_r2},
	};

	// DATA FOR PROGRAMM
	int welcome_menu_choose = 0;
	int registration_menu_choose = 0;
	int profile_menu_choose = 0;
	int menu_choose = 0;
	string username;
	string password;
	string temp_password;
	int level = 0;
	string registration;

	// MAIN CODE
	User user;

	while (true)
	{
		if (user.get_regbool() == false)
		{
			clear();
			loading();
			clear();
			banner();
			welcome();
			cout << "	choose(welcome):~> ";
			cin >> welcome_menu_choose;
			switch (welcome_menu_choose)
			{
			case 1:
				clear();
				loading();
				clear();
				banner();
				reg_and_login();
				cout << "	choose(registration):~> ";
				cin >> registration_menu_choose;
				switch (registration_menu_choose)
				{
				case 1:
					clear();
					banner();
					cout << endl;
					cout << "Enter username (ex: Grosmaster2000):~> ";
					cin >> username;
					clear();
					banner();
					cout << endl;
					cout << "Enter password: (ex: qwerty+_chess):~> ";
					cin >> password;
					clear();
					banner();
					cout << endl;
					cout << "Enter chess level (ex: 1012):~> ";
					cin >> level;

					user.set_username(username);
					user.set_password(password);
					user.set_level(level);
					user.set_regbool(true);
					clear();
					banner();
					cout << endl;
					user.inf0();
					cout << endl;
					press_to_continue();
					break;
				case 2:
					clear();
					user.set_username("Guest_Grassmaster");
					user.set_password("guest123qwerty");
					user.set_level(0);
					user.set_regbool(true);
					clear();
					banner();
					cout << endl;
					user.inf0();
					cout << endl;
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
				clear();
				loading();
				clear();
				banner();
				for (int i = 0; i < 8; i++)
				{
					cout << "  +-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
					for (int j = 0; j < 8; j++)
					{
						if (j == 0)
						{
							cout << i + 1 << " ";
						}
						if (board_arr[i][j] == nullptr)
						{
							cout << "|     ";
							if (j == 7)
							{
								cout << "|";
							}
							continue;
						}
						cout << "| " << board_arr[i][j]->get_name() << " ";
						if (j == 7)
						{
							cout << "|";
						}
					}
					cout << endl;
				}
				cout << "  +-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
				cout << "     a     b     c     d     e     f     g     h   " << endl;
				cout << endl;
				press_to_continue();
				break;
			case 3:
				clear();
				loading();
				clear();
				banner();
				about();
				cout << endl;
				press_to_continue();
				break;
			case 4:
				clear();
				loading();
				clear();
				banner();
				license();
				cout << endl;
				press_to_continue();
				break;
			case 5:
				clear();
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
			string temp_username;
			string temp_password;
			int temp_level;

			clear();
			loading();
			clear();
			banner();
			menu();
			cout << "	choose(menu):~> ";
			cin >> menu_choose;
			switch (menu_choose)
			{
			case 1:
				clear();
				banner();
				profile(user);
				cout << "	choose(profile):~> ";
				cin >> profile_menu_choose;
				switch (profile_menu_choose)
				{
				case 1:
					clear();
					banner();
					cout << "	enter user password:~> ";
					cin >> temp_password;

					if (user.get_password() == temp_password)
					{
						cout << "    enter new username:~> ";
						cin >> temp_username;
						user.set_username(temp_username);
						press_to_continue();
					}
					else
					{
						cout << " Sorry, but password is wrong.";
						press_to_continue();
					}
					break;
				case 2:
					clear();
					banner();
					cout << "	enter user password:~> ";
					cin >> temp_password;

					if (user.get_password() == temp_password)
					{
						cout << "    enter new password:~> ";
						cin >> temp_password;
						user.set_password(temp_password);
						press_to_continue();
					}
					else
					{
						cout << " Sorry, but password is wrong.";
						press_to_continue();
					}
					break;
				case 3:
					clear();
					banner();
					cout << "	enter user password:~> ";
					cin >> temp_password;

					if (user.get_password() == temp_password)
					{
						cout << "    enter new level:~> ";
						cin >> temp_level;
						user.set_level(temp_level);
						press_to_continue();
					}
					else
					{
						cout << " Sorry, but password is wrong.";
						press_to_continue();
					}
					break;
				case 4:
					break;
				default:
					break;
				}
				break;
			case 2:
				clear();
				loading();
				clear();
				for (int i = 0; i < 8; i++)
				{
					cout << "  +-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
					for (int j = 0; j < 8; j++)
					{
						if (j == 0)
						{
							cout << i + 1 << " ";
						}
						if (board_arr[i][j] == nullptr)
						{
							cout << "|     ";
							if (j == 7)
							{
								cout << "|";
							}
							continue;
						}
						cout << "| " << board_arr[i][j]->get_name() << " ";
						if (j == 7)
						{
							cout << "|";
						}
					}
					cout << endl;
				}
				cout << "  +-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
				cout << "     a     b     c     d     e     f     g     h   " << endl;
				break;
			case 3:
				// In process.
				break;
			case 4:
				clear();
				loading();
				clear();
				banner();
				about();
				cout << endl;
				press_to_continue();
				break;
			case 5:
				clear();
				loading();
				clear();
				banner();
				license();
				cout << endl;
				press_to_continue();
				break;
			case 6:
				clear();
				loading();
				clear();
				user.set_regbool(false);
				press_to_continue();
				break;
			default:
				cout << "Err: Menu." << endl;
				error();
				press_to_continue();
				break;
			}
		}
	}

	return 0;
}