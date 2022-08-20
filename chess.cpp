/*
MIT License

Copyright (c) 2022 Elvin Suleymanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Start: July 03, 2022
End: July 24, 2022

Last Update: August 20, 2022
*/

#include <iostream>
#include <string>
#include <stdio.h>
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

	// Creating figures(objects_temp)
	Queen w_Q_temp;
	Queen b_Q_temp;

	w_Q_temp.set_name("w_Q"); w_Q_temp.set_color("white"); w_Q_temp.set_weight(11);
	b_Q_temp.set_name("b_Q"); b_Q_temp.set_color("black"); b_Q_temp.set_weight(11);

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
		{&w_r1, &w_h1, &w_e1, &w_Q, &w_K, &w_e2, &w_h2, &w_r2}
	};

	// DATA FOR PROGRAMM
	int welcome_menu_choose = 0;
	int registration_menu_choose = 0;
	int profile_menu_choose = 0;
	int menu_choose = 0;
	int xf = 0;
	int yf = 0;
	int xn = 0;
	int yn = 0;
	// int pawn_ = 0;
	string password;
	string temp_password;
	string username;
	string registration;
	char coor[4]{};
	bool game = true;
	bool game_result = false;
	bool rook_res = true;
	bool elep_res = true;
	Play player = WHITE;

	// MAIN CODE
	User user;

	printf("Guten Tag!\nEnter your system: ");
	cin >> user.SYSTEM;

	while (true)
	{
		if (user.get_regbool() == false)
		{
			clear(user.SYSTEM);
			loading();
			clear(user.SYSTEM);
			banner();
			welcome();
			cout << "	choose(welcome) --> ";
			cin >> welcome_menu_choose;
			switch (welcome_menu_choose)
			{
			case 1:
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
				banner();
				reg_and_login();
				cout << "	choose(registration) --> ";
				cin >> registration_menu_choose;
				switch (registration_menu_choose)
				{
				case 1:
					clear(user.SYSTEM);
					banner();
					cout << endl;
					cout << "Enter username [ex: Grosmaster2000] --> ";
					cin >> username;
					clear(user.SYSTEM);
					banner();
					cout << endl;
					cout << "Enter password [ex: qwerty+_chess] --> ";
					cin >> password;
					clear(user.SYSTEM);
					banner();
					cout << endl;
					user.set_username(username);
					user.set_password(password);
					user.set_regbool(true);
					clear(user.SYSTEM);
					banner();
					cout << endl;
					user.inf0();
					cout << endl;
					press_to_continue();
					break;
				case 2:
					clear(user.SYSTEM);
					user.set_username("Guest_Grassmaster");
					user.set_password("guest123qwerty");
					user.set_regbool(true);
					clear(user.SYSTEM);
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
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
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
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
				banner();
				about();
				cout << endl;
				press_to_continue();
				break;
			case 4:
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
				banner();
				license();
				cout << endl;
				press_to_continue();
				break;
			case 5:
				clear(user.SYSTEM);
				cout << "Auf Wiedersehen!" << endl;
				exit(0);
			default:
				cout << "Err: Welcome Menu." << endl;
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

			clear(user.SYSTEM);
			loading();
			clear(user.SYSTEM);
			banner();
			menu();
			cout << "	choose(menu) --> ";
			cin >> menu_choose;
			switch (menu_choose)
			{
			case 1:
				clear(user.SYSTEM);
				banner();
				profile(user);
				cout << "	choose(profile) --> ";
				cin >> profile_menu_choose;
				switch (profile_menu_choose)
				{
				case 1:
					clear(user.SYSTEM);
					banner();
					cout << "	enter user password --> ";
					cin >> temp_password;

					if (user.get_password() == temp_password)
					{
						cout << "    enter new username  --> ";
						cin >> temp_username;
						user.set_username(temp_username);
						press_to_continue();
					}
					else
					{
						cout << "Err: Wrong Password." << endl;
						press_to_continue();
					}
					break;
				case 2:
					clear(user.SYSTEM);
					banner();
					cout << "	enter user password  --> ";
					cin >> temp_password;

					if (user.get_password() == temp_password)
					{
						cout << "    enter new password --> ";
						cin >> temp_password;
						user.set_password(temp_password);
						press_to_continue();
					}
					else
					{
						cout << "Err: Wrong Password." << endl;
						press_to_continue();
					}
					break;
				case 3:
					break;
				default:
					break;
				}
				break;
			case 2:
				clear(user.SYSTEM);
				loading();
				while (true)
				{
					while (game)
					{
						clear(user.SYSTEM);
						cout << "WHITE PLAYER: " << user.get_username() << "  LEVEL: " << user.get_level() << endl << endl;
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

						if (player == WHITE)
						{
							printf("\n\t WHITE: \n");
							printf("\t\tchoose figure [ex: e7] --> ");
							cin >> coor[0];
							cin >> coor[1];
							xf = 0;
							yf = 0;
							xn = 0;
							xf = 0;
							xf = lti(coor, 0);
							yf = ltl(coor, 1);

							/*
										WHITE
							*/
							if (board_arr[yf][xf] != nullptr)
							{
								if (board_arr[yf][xf]->get_name() == "w_p")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yf][xf]->get_first_action() == false)
									{
										if ((xn == xf && yn == (yf - 1)) || (xn == xf && yn == (yf - 2)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												board_arr[yf][xf]->set_first_action(true);
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Foward.\n");
												press_to_continue();
											}
											else
											{
												printf("Err: Position is blocked.");
												press_to_continue();
											}
										}
										else if ((yn == (yf - 1) && xn == (xf - 1)) || (yn == (yf - 1) && xn == (xf + 1)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												printf("Err: You can't go to this positon because on this position no figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													printf("Err: You can't kill your figures.\n");
													press_to_continue();
												}
												else
												{
													if (board_arr[yn][xn]->get_name() == "b_K")
													{
														user.set_level(user.get_level() + 10);
														game_result = true;
														break;
													}
													else
													{
														if (yn == 0)
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight() + 5);
															board_arr[yn][xn] = &w_Q_temp;
															board_arr[yf][xf] = nullptr;
															player = BLACK;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
														}
														printf("Right & Left.\n");
														press_to_continue();
													}
												}
											}
										}
									}
									else if (board_arr[yf][xf]->get_first_action() == true)
									{
										if (xn == xf && yn == (yf - 1))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Foward.\n");
												press_to_continue();
											}
											else
											{
												printf("Err: Position is blocked.");
												press_to_continue();
											}
										}
										else if ((yn == (yf - 1) && xn == (xf - 1)) || (yn == (yf - 1) && xn == (xf + 1)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												printf("You can't go to this positon because on this position no figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													printf("Err: You can't kill your figures.\n");
													press_to_continue();
												}
												else
												{
													if (board_arr[yn][xn]->get_name() == "b_K")
													{
														user.set_level(user.get_level() + 10);
														game_result = true;
														break;
													}
													else
													{
														if (yn == 0)
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight() + 5);
															board_arr[yn][xn] = &w_Q_temp;
															board_arr[yf][xf] = nullptr;
															player = BLACK;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
														}
														printf("Right & Left.\n");
														press_to_continue();
													}
												}
											}
										}
									}
									else
									{
										printf("Err: Pawn first_action not false & true.\n");
										press_to_continue();
									}
								}
								else if (board_arr[yf][xf]->get_name() == "w_h")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if ((yn == (yf - 2) && xn == (xf - 1)) || (yn == (yf - 2) && xn == (xf + 1)) || (yn == (yf + 2) && xn == (xf - 1)) || (yn == (yf + 2) && xn == (xf + 1)) || (yn == (yf - 1) && xn == (xf - 2)) || (yn == (yf + 1) && xn == (xf - 2)) || (yn == (yf - 1) && xn == (xf + 2)) || (yn == (yf + 1) && xn == (xf + 2)))
									{
										if (board_arr[yn][xn] == nullptr)
										{
											board_arr[yn][xn] = board_arr[yf][xf];
											board_arr[yf][xf] = nullptr;
											player = BLACK;
											printf("Forward.\n");
											press_to_continue();
										}
										else
										{
											if (board_arr[yn][xn]->get_color() == "white")
											{
												printf("Err: You can't kill your figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
													press_to_continue();
												}
											}
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "w_e")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yn][xn] != nullptr)
									{
										if (board_arr[yn][xn]->get_color() == "white")
										{
											cout << "You can't kill your figures." << endl;
										}
									}
									else if (xn > xf && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left-Down.
									else if (xf > xn && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left.
									else if (xf > xn && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Right-Down.
									else if (xn > xf && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
													press_to_continue();
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
												press_to_continue();
											}
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "w_r")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yn][xn] != nullptr)
									{
										if (board_arr[yn][xn]->get_color() == "white")
										{
											printf("You can't kill your figure.\n");
										}
									}
									if (xf == xn)
									{
										rook_res = true;
										if (yf > yn)
										{
											for (int i = yf - 1; i > yn; i--)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else if (yf < yn)
										{
											for (int i = yf - 1; i > yn; i++)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
									}
									else if (yf == yn)
									{
										rook_res = true;
										if (xf > xn)
										{
											for (int i = xf - 1; i > xn; i--)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else if (xf < xn)
										{
											for (int i = xf - 1; i > xn; i++)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else
										{
											printf("Err: Try again with another position.\n");
										}
									}
									press_to_continue();
								}
								else if (board_arr[yf][xf]->get_name() == "w_Q")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yn][xn] != nullptr)
									{
										if (board_arr[yn][xn]->get_color() == "white")
										{
											cout << "You can't kill your figures." << endl;
										}
									}
									else if (xn > xf && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left-Down.
									else if (xf > xn && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left.
									else if (xf > xn && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Right-Down.
									else if (xn > xf && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "white")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
													press_to_continue();
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = BLACK;
												printf("Forward.\n");
												press_to_continue();
											}
										}
									}
									if (xf == xn)
									{
										rook_res = true;
										if (yf > yn)
										{
											for (int i = yf - 1; i > yn; i--)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else if (yf < yn)
										{
											for (int i = yf - 1; i > yn; i++)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
									}
									else if (yf == yn)
									{
										rook_res = true;
										if (xf > xn)
										{
											for (int i = xf - 1; i > xn; i--)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else if (xf < xn)
										{
											for (int i = xf - 1; i > xn; i++)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "black")
													{
														if (board_arr[yn][xn]->get_name() == "b_K")
														{
															user.set_level(user.get_level() + 10);
															game_result = true;
															break;
														}
														else
														{
															user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = BLACK;
															printf("You kill black figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("Forward.\n");
												}
											}
										}
										else
										{
											printf("Err: Try again with another position.\n");
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "w_K")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if ((yf == yn && xn == (xf + 1)) || (yf == yn && xn == (xf - 1)) || (xf == xn && yn == (yf + 1)) || (xf == xn && yn == (yf - 1)) || (xn == (xf + 1) && yn == (yf + 1)) || (xn == (xf + 1) && yn == (yf - 1)) || (xn == (xf - 1) && yn == (yf + 1)) || (xn == (xf - 1) && yn == (yf - 1)))
									{
										if (board_arr[yn][xn] == nullptr)
										{
											board_arr[yn][xn] = board_arr[yf][xf];
											board_arr[yf][xf] = nullptr;
											player = BLACK;
											printf("Forward.\n");
											press_to_continue();
										}
										else
										{
											if (board_arr[yn][xn]->get_color() == "white")
											{
												printf("Err: You can't kill your figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_name() == "b_K")
												{
													user.set_level(user.get_level() + 10);
													game_result = true;
													break;
												}
												else
												{
													user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = BLACK;
													printf("You kill black figure.\n");
													press_to_continue();
												}
											}
										}
									}
								}
							}
							else
							{
								printf("Err: Your choose is wrong (nullptr).\n");
								press_to_continue();
							}
						}
						else if (player == BLACK)
						{
							printf("\n\t BLACK: \n");
							printf("\t\tchoose figure [ex: e2] --> ");
							cin >> coor[0];
							cin >> coor[1];
							xf = 0;
							yf = 0;
							xn = 0;
							xf = 0;
							xf = lti(coor, 0);
							yf = ltl(coor, 1);

							/*
										BLACK
							*/
							if (board_arr[yf][xf] != nullptr)
							{
								if (board_arr[yf][xf]->get_name() == "b_p")
								{
									printf("\t\t\tchoose position [ex: b2] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yf][xf]->get_first_action() == false)
									{
										if ((xn == xf && yn == (yf + 1)) || (xn == xf && yn == (yf + 2)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												board_arr[yf][xf]->set_first_action(true);
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Foward.\n");
												press_to_continue();
											}
											else
											{
												printf("Err: Position is blocked.");
												press_to_continue();
											}
										}
										else if ((yn == (yf + 1) && xn == (xf - 1)) || (yn == (yf + 1) && xn == (xf + 1)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												printf("Err: You can't go to this positon because on this position no figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_color() == "black")
												{
													printf("Err: You can't kill your figures.\n");
													press_to_continue();
												}
												else
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														if (yn == 7)
														{
															board_arr[yn][xn] = &b_Q_temp;
															board_arr[yf][xf] = nullptr;
															player = WHITE;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
														}
														printf("Right & Left.\n");
														press_to_continue();
													}
												}
											}
										}
									}
									else if (board_arr[yf][xf]->get_first_action() == true)
									{
										if (xn == xf && yn == (yf + 1))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Foward.\n");
												press_to_continue();
											}
											else
											{
												printf("Err: Position is blocked.");
												press_to_continue();
											}
										}
										else if ((yn == (yf + 1) && xn == (xf - 1)) || (yn == (yf + 1) && xn == (xf + 1)))
										{
											if (board_arr[yn][xn] == nullptr)
											{
												printf("You can't go to this positon because on this position no figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_color() == "black")
												{
													printf("Err: You can't kill your figures.\n");
													press_to_continue();
												}
												else
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														if (yn == 7)
														{
															board_arr[yn][xn] = &b_Q_temp;
															board_arr[yf][xf] = nullptr;
															player = WHITE;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
														}
														printf("Right & Left.\n");
														press_to_continue();
													}
												}
											}
										}
									}
									else
									{
										printf("Err: Pawn first_action not false & true.\n");
										press_to_continue();
									}
								}
								else if (board_arr[yf][xf]->get_name() == "b_h")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if ((yn == (yf - 2) && xn == (xf - 1)) || (yn == (yf - 2) && xn == (xf + 1)) || (yn == (yf + 2) && xn == (xf - 1)) || (yn == (yf + 2) && xn == (xf + 1)) || (yn == (yf - 1) && xn == (xf - 2)) || (yn == (yf + 1) && xn == (xf - 2)) || (yn == (yf - 1) && xn == (xf + 2)) || (yn == (yf + 1) && xn == (xf + 2)))
									{
										if (board_arr[yn][xn] == nullptr)
										{
											board_arr[yn][xn] = board_arr[yf][xf];
											board_arr[yf][xf] = nullptr;
											player = WHITE;
											printf("Forward.\n");
											press_to_continue();
										}
										else
										{
											if (board_arr[yn][xn]->get_color() == "black")
											{
												printf("Err: You can't kill your figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_name() == "w_K")
												{
													game_result = false;
													break;
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("You kill white figure.\n");
													press_to_continue();
												}
											}
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "b_e")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (xn > xf && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left-Down.
									else if (xf > xn && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left.
									else if (xf > xn && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Right-Down.
									else if (xn > xf && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
														press_to_continue();
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
												press_to_continue();
											}
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "b_r")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yn][xn] != nullptr)
									{
										if (board_arr[yn][xn]->get_color() == "black")
										{
											printf("You can't kill your figure.\n");
										}
									}
									if (xf == xn)
									{
										rook_res = true;
										if (yf > yn)
										{
											for (int i = yf; i > yn; i--)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else if (yf < yn)
										{
											for (int i = yf; i < yn; i++)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
									}
									else if (yf == yn)
									{
										rook_res = true;
										if (xf > xn)
										{
											for (int i = xf - 1; i > xn; i--)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else if (xf < xn)
										{
											for (int i = xf - 1; i > xn; i++)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else
										{
											printf("Err: Try again with another position.\n");
										}
									}
									press_to_continue();
								}
								else if (board_arr[yf][xf]->get_name() == "b_Q")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if (board_arr[yn][xn] != nullptr)
									{
										if (board_arr[yn][xn]->get_color() == "black")
										{
											cout << "You can't kill your figures." << endl;
										}
									}
									else if (xn > xf && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left-Down.
									else if (xf > xn && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Left.
									else if (xf > xn && yf > yn)
									{
										elep_res = true;
										for (int i = yf - 1; i > yn; i--)
										{
											for (int j = xf - 1; j > xn; j--)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
											}
										}
									}
									// Diagonal Right-Down.
									else if (xn > xf && yf < yn)
									{
										elep_res = true;
										for (int i = yf + 1; i < yn; i++)
										{
											for (int j = xf + 1; j < xn; j++)
											{
												if (board_arr[i][j] != nullptr)
												{
													if (board_arr[i][j]->get_color() == "black")
													{
														printf("You can't kill your figures.\n");
														elep_res = false;
														break;
													}
												}
											}
										}
										if (elep_res == true)
										{
											if (board_arr[yn][xn] != nullptr)
											{
												if (board_arr[yn][xn]->get_color() == "white")
												{
													if (board_arr[yn][xn]->get_name() == "w_K")
													{
														game_result = false;
														break;
													}
													else
													{
														board_arr[yn][xn] = board_arr[yf][xf];
														board_arr[yf][xf] = nullptr;
														player = WHITE;
														printf("You kill white figure.\n");
														press_to_continue();
													}
												}
											}
											else
											{
												board_arr[yn][xn] = board_arr[yf][xf];
												board_arr[yf][xf] = nullptr;
												player = WHITE;
												printf("Forward.\n");
												press_to_continue();
											}
										}
									}
									if (xf == xn)
									{
										rook_res = true;
										if (yf > yn)
										{
											for (int i = yf; i > yn; i--)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else if (yf < yn)
										{
											for (int i = yf; i < yn; i++)
											{
												if (board_arr[i][xn] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
									}
									else if (yf == yn)
									{
										rook_res = true;
										if (xf > xn)
										{
											for (int i = xf - 1; i > xn; i--)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else if (xf < xn)
										{
											for (int i = xf - 1; i > xn; i++)
											{
												if (board_arr[yn][i] != nullptr)
												{
													printf("Err: Wrong Position.\n");
													rook_res = false;
													break;
												}
											}
											if (rook_res == true)
											{
												if (board_arr[yn][xn] != nullptr)
												{
													if (board_arr[yn][yn]->get_color() == "white")
													{
														if (board_arr[yn][xn]->get_name() == "w_K")
														{
															game_result = false;
															break;
														}
														else
														{
															board_arr[yn][xn] = board_arr[yf][xf];
															board_arr[yf][xf] = nullptr;
															player = WHITE;
															printf("You kill white figure.\n");
														}
													}
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("Forward.\n");
												}
											}
										}
										else
										{
											printf("Err: Try again with another position.\n");
										}
									}
								}
								else if (board_arr[yf][xf]->get_name() == "b_K")
								{
									printf("\t\t\tchoose position [ex: e5] --> ");
									cin >> coor[2];
									cin >> coor[3];
									xn = lti(coor, 2);
									yn = ltl(coor, 3);

									printf("RESULT:");

									if ((yf == yn && xn == (xf + 1)) || (yf == yn && xn == (xf - 1)) || (xf == xn && yn == (yf + 1)) || (xf == xn && yn == (yf - 1)) || (xn == (xf + 1) && yn == (yf + 1)) || (xn == (xf + 1) && yn == (yf - 1)) || (xn == (xf - 1) && yn == (yf + 1)) || (xn == (xf - 1) && yn == (yf - 1)))
									{
										if (board_arr[yn][xn] == nullptr)
										{
											board_arr[yn][xn] = board_arr[yf][xf];
											board_arr[yf][xf] = nullptr;
											player = WHITE;
											printf("Forward.\n");
											press_to_continue();
										}
										else
										{
											if (board_arr[yn][xn]->get_color() == "black")
											{
												printf("Err: You can't kill your figures.\n");
												press_to_continue();
											}
											else
											{
												if (board_arr[yn][xn]->get_name() == "w_K")
												{
													game_result = true;
													break;
												}
												else
												{
													board_arr[yn][xn] = board_arr[yf][xf];
													board_arr[yf][xf] = nullptr;
													player = WHITE;
													printf("You kill white figure.\n");
													press_to_continue();
												}
											}
										}
									}
								}
							}
							else
							{
								printf("Err: Your choose is wrong (nullptr).\n");
								press_to_continue();
							}
						}
						else
						{
							cout << "Err: Player." << endl;
							press_to_continue();
						}
					}

					if (game_result == true)
					{
						board_arr[0][0] = &b_r1; board_arr[0][1] = &b_h1; board_arr[0][2] = &b_e1; board_arr[0][3] = &b_Q; board_arr[0][4] = &b_K; board_arr[0][5] = &b_e2; board_arr[0][6] = &b_h2; board_arr[0][7] = &b_r2;
						board_arr[1][0] = &b_p1; board_arr[1][1] = &b_p2; board_arr[1][2] = &b_p3; board_arr[1][3] = &b_p4; board_arr[1][4] = &b_p5; board_arr[1][5] = &b_p6; board_arr[1][6] = &b_p7; board_arr[1][7] = &b_p8;
						board_arr[2][0] = nullptr; board_arr[2][1] = nullptr; board_arr[2][2] = nullptr; board_arr[2][3] = nullptr; board_arr[2][4] = nullptr; board_arr[2][5] = nullptr; board_arr[2][6] = nullptr; board_arr[2][7] = nullptr;
						board_arr[3][0] = nullptr; board_arr[3][1] = nullptr; board_arr[3][2] = nullptr; board_arr[3][3] = nullptr; board_arr[3][4] = nullptr; board_arr[3][5] = nullptr; board_arr[3][6] = nullptr; board_arr[3][7] = nullptr;
						board_arr[4][0] = nullptr; board_arr[4][1] = nullptr; board_arr[4][2] = nullptr; board_arr[4][3] = nullptr; board_arr[4][4] = nullptr; board_arr[4][5] = nullptr; board_arr[4][6] = nullptr; board_arr[4][7] = nullptr;
						board_arr[5][0] = nullptr; board_arr[5][1] = nullptr; board_arr[5][2] = nullptr; board_arr[5][3] = nullptr; board_arr[5][4] = nullptr; board_arr[5][5] = nullptr; board_arr[5][6] = nullptr; board_arr[5][7] = nullptr;
						board_arr[6][0] = &w_p1; board_arr[6][1] = &w_p2; board_arr[6][2] = &w_p3; board_arr[6][3] = &w_p4; board_arr[6][4] = &w_p5; board_arr[6][5] = &w_p6; board_arr[6][6] = &w_p7; board_arr[6][7] = &w_p8;
						board_arr[7][0] = &w_r1; board_arr[7][1] = &w_h1; board_arr[7][2] = &w_e1; board_arr[7][3] = &w_Q; board_arr[7][4] = &w_K; board_arr[7][5] = &w_e2; board_arr[7][6] = &w_h2; board_arr[7][7] = &w_r2;

						board_arr[6][0]->set_first_action(false);
						board_arr[6][1]->set_first_action(false);
						board_arr[6][2]->set_first_action(false);
						board_arr[6][3]->set_first_action(false);
						board_arr[6][4]->set_first_action(false);
						board_arr[6][5]->set_first_action(false);
						board_arr[6][6]->set_first_action(false);
						board_arr[6][7]->set_first_action(false);
						board_arr[1][0]->set_first_action(false);
						board_arr[1][1]->set_first_action(false);
						board_arr[1][2]->set_first_action(false);
						board_arr[1][3]->set_first_action(false);
						board_arr[1][4]->set_first_action(false);
						board_arr[1][5]->set_first_action(false);
						board_arr[1][6]->set_first_action(false);
						board_arr[1][7]->set_first_action(false);

						board_arr[7][4]->set_first_action(false);
						board_arr[0][4]->set_first_action(false);

						rook_res = true;

						clear(user.SYSTEM);
						loading();
						clear(user.SYSTEM);
						board_win(user);
						break;
					}
					else if (game_result == false)
					{
						board_arr[0][0] = &b_r1; board_arr[0][1] = &b_h1; board_arr[0][2] = &b_e1; board_arr[0][3] = &b_Q; board_arr[0][4] = &b_K; board_arr[0][5] = &b_e2; board_arr[0][6] = &b_h2; board_arr[0][7] = &b_r2;
						board_arr[1][0] = &b_p1; board_arr[1][1] = &b_p2; board_arr[1][2] = &b_p3; board_arr[1][3] = &b_p4; board_arr[1][4] = &b_p5; board_arr[1][5] = &b_p6; board_arr[1][6] = &b_p7; board_arr[1][7] = &b_p8;
						board_arr[2][0] = nullptr; board_arr[2][1] = nullptr; board_arr[2][2] = nullptr; board_arr[2][3] = nullptr; board_arr[2][4] = nullptr; board_arr[2][5] = nullptr; board_arr[2][6] = nullptr; board_arr[2][7] = nullptr;
						board_arr[3][0] = nullptr; board_arr[3][1] = nullptr; board_arr[3][2] = nullptr; board_arr[3][3] = nullptr; board_arr[3][4] = nullptr; board_arr[3][5] = nullptr; board_arr[3][6] = nullptr; board_arr[3][7] = nullptr;
						board_arr[4][0] = nullptr; board_arr[4][1] = nullptr; board_arr[4][2] = nullptr; board_arr[4][3] = nullptr; board_arr[4][4] = nullptr; board_arr[4][5] = nullptr; board_arr[4][6] = nullptr; board_arr[4][7] = nullptr;
						board_arr[5][0] = nullptr; board_arr[5][1] = nullptr; board_arr[5][2] = nullptr; board_arr[5][3] = nullptr; board_arr[5][4] = nullptr; board_arr[5][5] = nullptr; board_arr[5][6] = nullptr; board_arr[5][7] = nullptr;
						board_arr[6][0] = &w_p1; board_arr[6][1] = &w_p2; board_arr[6][2] = &w_p3; board_arr[6][3] = &w_p4; board_arr[6][4] = &w_p5; board_arr[6][5] = &w_p6; board_arr[6][6] = &w_p7; board_arr[6][7] = &w_p8;
						board_arr[7][0] = &w_r1; board_arr[7][1] = &w_h1; board_arr[7][2] = &w_e1; board_arr[7][3] = &w_Q; board_arr[7][4] = &w_K; board_arr[7][5] = &w_e2; board_arr[7][6] = &w_h2; board_arr[7][7] = &w_r2;

						board_arr[6][0]->set_first_action(false);
						board_arr[6][1]->set_first_action(false);
						board_arr[6][2]->set_first_action(false);
						board_arr[6][3]->set_first_action(false);
						board_arr[6][4]->set_first_action(false);
						board_arr[6][5]->set_first_action(false);
						board_arr[6][6]->set_first_action(false);
						board_arr[6][7]->set_first_action(false);
						board_arr[1][0]->set_first_action(false);
						board_arr[1][1]->set_first_action(false);
						board_arr[1][2]->set_first_action(false);
						board_arr[1][3]->set_first_action(false);
						board_arr[1][4]->set_first_action(false);
						board_arr[1][5]->set_first_action(false);
						board_arr[1][6]->set_first_action(false);
						board_arr[1][7]->set_first_action(false);

						board_arr[7][4]->set_first_action(false);
						board_arr[0][4]->set_first_action(false);

						rook_res = true;

						clear(user.SYSTEM);
						loading();
						clear(user.SYSTEM);
						board_loss(user);
						break;
					}
				}
				press_to_continue();
				break;
			case 3:
				break;
			case 4:
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
				banner();
				about();
				cout << endl;
				press_to_continue();
				break;
			case 5:
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
				banner();
				license();
				cout << endl;
				press_to_continue();
				break;
			case 6:
				clear(user.SYSTEM);
				loading();
				clear(user.SYSTEM);
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
