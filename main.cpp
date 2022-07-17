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

    bool WKing = true;
    
    // Setting all settings on figures
    w_p1.set_name("w_p"); w_p1.set_color("white"); w_p1.set_weight(1); //bool WPawn1 = true; // White Pawn #1
    w_p2.set_name("w_p"); w_p2.set_color("white"); w_p2.set_weight(1); //bool WPawn2 = true; // White Pawn #2
    w_p3.set_name("w_p"); w_p3.set_color("white"); w_p3.set_weight(1); //bool WPawn3 = true; // White Pawn #3
    w_p4.set_name("w_p"); w_p4.set_color("white"); w_p4.set_weight(1); //bool WPawn4 = true; // White Pawn #4
    w_p5.set_name("w_p"); w_p5.set_color("white"); w_p5.set_weight(1); //bool WPawn5 = true; // White Pawn #5
    w_p6.set_name("w_p"); w_p6.set_color("white"); w_p6.set_weight(1); //bool WPawn6 = true; // White Pawn #6
    w_p7.set_name("w_p"); w_p7.set_color("white"); w_p7.set_weight(1); //bool WPawn7 = true; // White Pawn #7
    w_p8.set_name("w_p"); w_p8.set_color("white"); w_p8.set_weight(1); //bool WPawn8 = true; // White Pawn #8
    //===============================================================================
    b_p1.set_name("b_p"); b_p1.set_color("black"); b_p1.set_weight(1); //bool BPawn1 = true; // Black Pawn #1
    b_p2.set_name("b_p"); b_p2.set_color("black"); b_p2.set_weight(1); //bool BPawn2 = true; // Black Pawn #2
    b_p3.set_name("b_p"); b_p3.set_color("black"); b_p3.set_weight(1); //bool BPawn3 = true; // Black Pawn #3
    b_p4.set_name("b_p"); b_p4.set_color("black"); b_p4.set_weight(1); //bool BPawn4 = true; // Black Pawn #4
    b_p5.set_name("b_p"); b_p5.set_color("black"); b_p5.set_weight(1); //bool BPawn5 = true; // Black Pawn #5
    b_p6.set_name("b_p"); b_p6.set_color("black"); b_p6.set_weight(1); //bool BPawn6 = true; // Black Pawn #6
    b_p7.set_name("b_p"); b_p7.set_color("black"); b_p7.set_weight(1); //bool BPawn7 = true; // Black Pawn #7
    b_p8.set_name("b_p"); b_p8.set_color("black"); b_p8.set_weight(1); //bool BPawn8 = true; // Black Pawn #8
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
    User user;
    string usrnm = " ";
    string pass = " ";
    int lvl = 0;
    int white_player = 0;
    int black_player = 0;
    int welcome_choose = 0;
    int menu_choose = 0;
    bool game_started = true;
    string x_coor = " ";
    string y_coor = " ";
    char coor[4] = {};

    cout << "Guten Tag! Enter your system name:~> ";
    cin >> sys;

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

                    user.set_username(usrnm);
                    user.set_password(pass);
                    user.set_level(lvl);
                    user.set_regbool(true);
                    user.inf0();

                    usrnm = " ";
                    pass = " ";
                    lvl = 0;
                }
                else if (registration_choose == 2)
                {
                    clear(sys);
                    user.set_username("Guest");
                    user.set_password("guest123");
                    user.set_level(0000000);
                    clear(sys);

                    user.set_regbool(true);
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
                    error();
                    exit(0);
                }
            }
            else if (menu_choose == 2)
            {
                int pawn_ = 0;
                int horse_ = 0;
                int elephant_ = 0;
                int rook_ = 0;
                int queen_ = 0;
                int king_ = 0;
                
                while (game_started)
                {
                    clear(sys);
                    
                    Play player = WHITE;
                    
                    while (true)
                    {
                        clear(sys);

                        cout << "USER: " << user.get_username() << " | " << "LEVEL: " << user.get_level() << endl << endl;
                        
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
                        
                        if (player == WHITE)
                        {
                            int white_player_choose = 0;
                            
                            cout << "WHITE PLAYER TURN!" << endl;
                            cout << "enter figure position (ex: a 7):~> ";
                            cin >> coor[0]; cin >> coor[1];
                            
                            int x = lti(coor, 0);
                            int y = ltl(coor, 1);

                            if (board_arr[y][x]->get_name() == "w_p")
                            {
                                board_arr[y][x]->info();
                                cout << endl << "    enter pawn choose:~> ";
                                cin >> white_player_choose;
                                
                                switch (white_player_choose)
                                {
                                case 1:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
                                        
                                        if (y2 >= 4)
                                        {
                                            if (board_arr[y2][x2] == nullptr)
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "This area is blocked by another figure." << endl;
                                                press_to_continue();
                                                continue;
                                            } 
                                        }
                                        else if (y2 == (pawn_ - 1))
                                        {
                                            if (board_arr[y2][x2] == nullptr)
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "This area is blocked by another figure." << endl;
                                                press_to_continue();
                                                continue;
                                            } 
                                        }
                                        else
                                        {
                                            cout << "Pls try again with another position." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }

                                case 2:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
    
                                        if (board_arr[y2][x2]->get_color() == "black")
                                        {
                                            if (x2 == (x1 + 1) && y2 == (y1 - 1))
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "Something went wrong." << endl;
                                                press_to_continue();
                                                continue;
                                            }
                                        }
                                        else
                                        {
                                            cout << "You can't kill your team figure." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }

                                case 3:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
    
                                        if (board_arr[y2][x2]->get_color() == "black")
                                        {
                                            if (x2 == (x1 - 1) && y2 == (y1 - 1))
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "Something went wrong." << endl;
                                                press_to_continue();
                                                continue;
                                            }
                                        }
                                        else
                                        {
                                            cout << "You can't kill your team figure." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }
                                }
                            }
                            else if (board_arr[y][x]->get_name() == "w_h") {}
                            else if (board_arr[y][x]->get_name() == "w_e") 
                            {
                                board_arr[y][x]->info();
                                cout << endl << "    enter elephant choose:~> ";
                                cin >> white_player_choose;
                                
                                switch (white_player_choose)
                                {
                                case 1:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
                                        
                                        if (y2 >= 4)
                                        {
                                            if (board_arr[y2][x2] == nullptr)
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "This area is blocked by another figure." << endl;
                                                press_to_continue();
                                                continue;
                                            } 
                                        }
                                        else if (y2 == (pawn_ - 1))
                                        {
                                            if (board_arr[y2][x2] == nullptr)
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "This area is blocked by another figure." << endl;
                                                press_to_continue();
                                                continue;
                                            } 
                                        }
                                        else
                                        {
                                            cout << "Pls try again with another position." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }

                                case 2:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
    
                                        if (board_arr[y2][x2]->get_color() == "black")
                                        {
                                            if (x2 == (x1 + 1) && y2 == (y1 - 1))
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "Something went wrong." << endl;
                                                press_to_continue();
                                                continue;
                                            }
                                        }
                                        else
                                        {
                                            cout << "You can't kill your team figure." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }

                                case 3:
                                    {
                                        cout << "enter figure next position (ex: a 6):~> ";
                                        cin >> coor[2]; cin >> coor[3];
            
                                        int x1 = lti(coor, 0);
                                        int y1 = ltl(coor, 1);
                                        int x2 = lti(coor, 2);
                                        int y2 = ltl(coor, 3);
    
                                        pawn_ = y1;
    
                                        if (board_arr[y2][x2]->get_color() == "black")
                                        {
                                            if (x2 == (x1 - 1) && y2 == (y1 - 1))
                                            {
                                                delete board_arr[y2][x2];
                                                board_arr[y2][x2] = board_arr[y1][x1];
                                                board_arr[y1][x1] = nullptr;
                                                player = BLACK;
                                                press_to_continue();
                                                continue;
                                            }
                                            else
                                            {
                                                cout << "Something went wrong." << endl;
                                                press_to_continue();
                                                continue;
                                            }
                                        }
                                        else
                                        {
                                            cout << "You can't kill your team figure." << endl;
                                            press_to_continue();
                                            continue;
                                        }
                                    }
                                }
                            }
                            else if (board_arr[y][x]->get_name() == "w_Q") {}
                            else if (board_arr[y][x]->get_name() == "w_K") {}
                            else {}
                            
                            press_to_continue();
                        }
                        else if (player == BLACK)
                        {
			                cout << "BLACK PLAYER TURN!" << endl;

                            player = WHITE;
                            
                            press_to_continue();
                        }
                        else
                        {
                            cout << "Err: 0472" << endl;
                            error();
                            exit(0);
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
            cout << "Err: 0505" << endl;
            error();
            exit(0);
        }
    }
    
    return 0;
}