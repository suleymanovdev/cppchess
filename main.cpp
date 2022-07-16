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
*/

#include <iostream>
#include <string>
#include "additional_files/user.h"
#include "additional_files/board.h"
#include "additional_files/figures/main_figure/figure.h"
#include "additional_files/menus.h"
#include "additional_files/functions.h"
#include "additional_files/figures/pawn.h"
#include "additional_files/figures/horse.h"
#include "additional_files/figures/elephant.h"
#include "additional_files/figures/rook.h"
#include "additional_files/figures/queen.h"
#include "additional_files/figures/king.h"
using namespace std;

int main()
{
    string sys; // Your System Name

    // Creating figures(objects)

    Pawn w_p1, w_p2, w_p3, w_p4, w_p5, w_p6, w_p7, w_p8, b_p1, b_p2, b_p3, b_p4, b_p5, b_p6, b_p7, b_p8;
    Horse w_h1, w_h2, b_h1, b_h2;
    Elephant w_e1, w_e2, b_e1, b_e2;
    Rook w_r1, w_r2, b_r1, b_r2;
    Queen w_Q, b_Q;
    King w_K, b_K;

    // Setting all settings on figures
    w_p1.set_name("w_p"); w_p1.set_color("white"); w_p1.set_weight(1); // White Pawn #1
    w_p2.set_name("w_p"); w_p2.set_color("white"); w_p2.set_weight(1); // White Pawn #2
    w_p3.set_name("w_p"); w_p3.set_color("white"); w_p3.set_weight(1); // White Pawn #3
    w_p4.set_name("w_p"); w_p4.set_color("white"); w_p4.set_weight(1); // White Pawn #4
    w_p5.set_name("w_p"); w_p5.set_color("white"); w_p5.set_weight(1); // White Pawn #5
    w_p6.set_name("w_p"); w_p6.set_color("white"); w_p6.set_weight(1); // White Pawn #6
    w_p7.set_name("w_p"); w_p7.set_color("white"); w_p7.set_weight(1); // White Pawn #7
    w_p8.set_name("w_p"); w_p8.set_color("white"); w_p8.set_weight(1); // White Pawn #8
    //===============================================================================
    b_p1.set_name("b_p"); b_p1.set_color("black"); b_p1.set_weight(1); // Black Pawn #1
    b_p2.set_name("b_p"); b_p2.set_color("black"); b_p2.set_weight(1); // Black Pawn #2
    b_p3.set_name("b_p"); b_p3.set_color("black"); b_p3.set_weight(1); // Black Pawn #3
    b_p4.set_name("b_p"); b_p4.set_color("black"); b_p4.set_weight(1); // Black Pawn #4
    b_p5.set_name("b_p"); b_p5.set_color("black"); b_p5.set_weight(1); // Black Pawn #5
    b_p6.set_name("b_p"); b_p6.set_color("black"); b_p6.set_weight(1); // Black Pawn #6
    b_p7.set_name("b_p"); b_p7.set_color("black"); b_p7.set_weight(1); // Black Pawn #7
    b_p8.set_name("b_p"); b_p8.set_color("black"); b_p8.set_weight(1); // Black Pawn #8
    //===============================================================================
    w_h1.set_name("w_h"); w_h1.set_color("white"); w_h1.set_weight(3); // White Horse #1
    w_h2.set_name("w_h"); w_h2.set_color("white"); w_h2.set_weight(3); // White Horse #2
    //===============================================================================
    b_h1.set_name("b_h"); b_h1.set_color("black"); b_h1.set_weight(3); // Black Horse #1
    b_h2.set_name("b_h"); b_h2.set_color("black"); b_h2.set_weight(3); // Black Horse #2
    //===============================================================================
    w_e1.set_name("w_e"); w_e1.set_color("white"); w_e1.set_weight(3); // White Elephant #1
    w_e2.set_name("w_e"); w_e2.set_color("white"); w_e2.set_weight(3); // White Elephant #2
    //===============================================================================
    b_e1.set_name("b_e"); b_e1.set_color("black"); b_e1.set_weight(3); // Black Elephant #1
    b_e2.set_name("b_e"); b_e2.set_color("black"); b_e2.set_weight(3); // Black Elephant #2
    //===============================================================================
    w_r1.set_name("w_r"); w_r1.set_color("white"); w_r1.set_weight(5); // White Rook #1
    w_r2.set_name("w_r"); w_r2.set_color("white"); w_r2.set_weight(5); // White Rook #2
    //===============================================================================
    b_r1.set_name("b_r"); b_r1.set_color("black"); b_r1.set_weight(5); // Black Rook #1
    b_r2.set_name("b_r"); b_r2.set_color("black"); b_r2.set_weight(5); // Black Rook #2
    //===============================================================================
    w_Q.set_name("w_Q"); w_Q.set_color("white"); w_Q.set_weight(9); // White Queen
    b_Q.set_name("b_Q"); b_Q.set_color("black"); b_Q.set_weight(9); // Black Queen
    w_K.set_name("w_K"); w_K.set_color("white"); w_K.set_weight(0); // White King
    b_K.set_name("b_K"); b_K.set_color("black"); b_K.set_weight(0); // Black King

    // Creating arrays
    // 1. Board with figures
    // 2. White killed figures
    // 3. Black killed figures

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

    Figure* killed_white_figures_arr[15] = {};
    Figure* killed_black_figures_arr[15] = {};

    // Creating user & data for it
	int size_user_array = 0;
    User* user_array = new User[size_user_array];
    string usrnm = " ";
    string pass = " ";
    int lvl = 0;

    // Data for players
    int white_player = 0;
    int black_player = 0;

    // Data for cycle
    int welcome_choose = 0;
    int menu_choose = 0;
    bool game_started = true;
    string x_coor = " ";
    string y_coor = " ";
    char coor[4] = {};

    // Entering system name
    cout << "Ou. Hello! Enter your system name:~> ";
    cin >> sys;

    // Cycle
    while (true)
    {
        clear(sys);
        banner();

        if (user.get_regbool() == false)
        {
            welcome();
            cout << "    choose(welcome):~> ";
            cin >> welcome_choose;

            if (welcome_choose == 1)
            {
                int registration_choose = 0;
                clear(sys);
                banner();
                reg_and_login();

                cout << "    choose(registration):~> ";
                cin >> registration_choose;

                if (registration_choose == 1)
                {
                    // Registering
                    clear(sys);
                    cout << "    enter nickname:~> ";
                    cin >> usrnm;
                    clear(sys);
                    cout << "    enter password:~> ";
                    cin >> pass;
                    clear(sys);
                    cout << "    enter level:~> ";
                    cin >> lvl;
                    clear(sys);

					addUser(user_array, size_user_array, usrnm, pass, lvl , true);

                    // Resul
                    user_array[size_user_array].inf0();

                    usrnm = " ";
                    pass = " ";
                    lvl = 0;
                }

                else if (registration_choose == 2)
                {
                    // Registering as Guest
                    clear(sys);
                    user.set_username("Guest");
                    user.set_password("guest123");
                    user.set_level(0000000);
                    clear(sys);

                    // Setting regisration bool (true)
                    user.set_regbool(true);

                    // Result
                    user.inf0();

					
                }

                else if (registration_choose == 3)
                {
                    continue;
                }

                press_to_continue();
            }

            else if (welcome_choose == 2)
            {
                clear(sys);
                //test: cout << board_arr[1][1]->get_name();
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
                press_to_continue();
            }

            else if (welcome_choose == 3)
            {
                clear(sys);
                banner();
                about();
                press_to_continue();
            }

            else if (welcome_choose == 4)
            {
                clear(sys);
                license();
                press_to_continue();
            }

            else if (welcome_choose == 5)
            {
                clear(sys);
                cout << "Auf Wiedersehen!" << endl;
                exit(0);
            }

            else
            {
                clear(sys);
                cout << "Err: 0002B" << endl;
                error();
                exit(0);
            }
        }

        else if (user.get_regbool() == true)
        {
            menu();
            cout << "    choose(menu):~> ";
            cin >> menu_choose;

            if (menu_choose == 1)
            {
                int profile_choose = 0;
                clear(sys);
                banner();
                profile(user);

                cout << "	choose(profile):~> ";
                cin >> profile_choose;

                if (profile_choose == 1)
                {
                    clear(sys);
                    banner();
                    string temp_password = "0";
                    cout << "Please enter user password:~> ";
                    cin >> temp_password;

                    if (user.get_password() == temp_password)
                    {
                        cout << "    enter new username:~> ";
                        cin >> usrnm;
                        user.set_username(usrnm);
                        press_to_continue();
                    }

                    else
                    {
                        cout << " Sorry, but password is wrong.";
                        press_to_continue();
                    }
                }

                else if (profile_choose == 2)
                {
                    clear(sys);
                    banner();
                    string temp_password = "0";
                    cout << "Please enter user password:~> ";
                    cin >> temp_password;

                    if (user.get_password() == temp_password)
                    {
                        cout << "    enter new password:~> ";
                        cin >> pass;
                        user.set_password(pass);
                        press_to_continue();
                    }

                    else
                    {
                        cout << " Sorry, but password is wrong.";
                        press_to_continue();
                    }
                }

                else if (profile_choose == 3)
                {
                    clear(sys);
                    banner();
                    string temp_password = "0";
                    cout << "Please enter user password:~> ";
                    cin >> temp_password;

                    if (user.get_password() == temp_password)
                    {

                        cout << "    enter new level:~> ";
                        cin >> usrnm;
                        user.set_username(usrnm);
                        press_to_continue();
                    }

                    else
                    {
                        cout << " Sorry, but password is wrong.";
                        press_to_continue();
                    }
                }

                else if (profile_choose == 4)
                {
                    continue;
                }

                else
                {
                    cout << "Err: 0003C" << endl;
                    exit(0);
                }
            }

            else if (menu_choose == 2)
            {
                while (game_started)
                {
                    clear(sys);
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
                    cout << "     0     1     2     3     4     5     6     7   (BETA)" << endl;

                    for (int i = 0; i < 2; i++)
                    {
                        if (i == WHITE)
                        {
                            int temp_x1 = 0;
                            int temp_x2 = 0;
                            int temp_y1 = 0;
                            int temp_y2 = 0;

                            cout << "enter figure position (ex: a 7):~> ";
                            cin >> coor[0]; cin >> coor[1];
                            cout << "enter figure next position (ex: a 6):~> ";
                            cin >> coor[2]; cin >> coor[3];

                            temp_x1 = lti(coor, 0);
                            temp_x2 = lti(coor, 2);

                            temp_y1 = ltl(coor, 1);
                            temp_y2 = ltl(coor, 3);

							if (board_arr[temp_y1][temp_x1]->get_color() == "white")
							{
								board_arr[temp_y1][temp_x1]->posch(temp_y2, temp_x2);
								
							}
                            press_to_continue();
                        }

                        else
                        {
							
                        }
                    }
                }
                press_to_continue();
            }

            else if (menu_choose == 3)
            {
                continue; // BETA
            }

            else if (menu_choose == 4)
            {
                clear(sys);
                user.set_username(" ");
                user.set_password(" ");
                user.set_level(0);
                user.set_regbool(false);
                continue;
            }

            else if (menu_choose == 5)
            {
                clear(sys);
                banner();
                about();
                press_to_continue();
            }

            else if (menu_choose == 6)
            {
                clear(sys);
                license();
                press_to_continue();
            }

            else if (menu_choose == 7)
            {
                clear(sys);
                cout << "Auf Wiedersehen!" << endl;
                exit(0);
            }
        }

        else
        {
            cout << "Err: 0001A" << endl;
            exit(0);
        }
    }
    return 0;
}