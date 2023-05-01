#include <iostream>
#include <string>
#include "user.h"
using namespace std;

void banner()
{
    cout << "	   ______              ________                  				" << endl;
    cout << "	  / ____/__    __     / ____/ /_  ___  __________				" << endl;
    cout << "	 / /  __/ /___/ /_   / /   / __ // _ // ___/ ___/				" << endl;
    cout << "	/ /__/_  __/_  __/  / /___/ / / /  __(__  |__  ) 				" << endl;
    cout << "	/____//_/   /_/     /____/_/ /_//___/____/____/  				" << endl;
    cout << "                                            by suleymanovdev.  	" << endl;
}

void welcome()
{
    cout << endl;
    cout << "      ---==============WELCOME===============---       " << endl;
	cout << endl;
	cout << "		[1]Registration.								" << endl; // reg_and_login();
    cout << endl;
	cout << "		[2]Board.										" << endl; // boardinfo();
    cout << endl;
	cout << "		[3]About.										" << endl; // about();
    cout << endl;
	cout << "		[4]License.										" << endl; // license();
    cout << endl;
	cout << "		[5]Exit.										" << endl; // exit(0);
}

void menu()
{
    cout << endl;
    cout << "      ---================MENU================---       " << endl;
    cout << endl;
	cout << "		[1]Profile.										" << endl; // profile();
    cout << endl;
	cout << "		[2]Play.										" << endl; // In process.
    cout << endl;
	cout << "		[3]Play with computer. (BETA)					" << endl; // In process.
    cout << endl;
	cout << "		[4]License.										" << endl; // license();
    cout << endl;
	cout << "		[5]About.										" << endl; // about();
    cout << endl;
	cout << "		[6]Log Out.										" << endl; // user.set_regbool(false);
	cout << endl;
	cout << "		[7]Statistics.									" << endl; // status;
}

void profile(User& user)
{
    cout << endl;
    cout << "      ---============user profıle============---       " << endl;
    cout << endl;
    cout << "          username: " << user.get_username()             << endl;
    cout << "          password: " << user.get_password()             << endl;
    cout << "          level: " << user.get_level()                   << endl;

	cout << endl;
	cout << "		[1]Change username.								" << endl; // checking with changing.
    cout << endl;
	cout << "		[2]Change password.								" << endl; // checking with changing.
    cout << endl;
	cout << "		[3]Back.							        	" << endl; // continue;
}

void reg_and_login()
{
    cout << endl;
    cout << "      ---============REGISTRATION============---       " << endl;
	cout << endl;
	cout << "		[1]Sign Up.										" << endl;
    cout << endl;
	cout << "		[2]Log In as Guest. (BETA)						" << endl;
    cout << endl;
	cout << "		[3]Back to menu.								" << endl;
}

void board_win(User& user)
{
	cout << "		   a     b     c     d     e     f     g     h   " << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	1	| b_r | b_h | b_e | b_Q | b_K | b_e | b_h | b_r |" << endl;
	cout << "	 	+-----+-----+-----+-----+-----|-----+-----+-----+" << endl;
	cout << "	2	| b_p | b_p | b_p | b_p | b_p | b_p | b_p | b_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	3	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	4	|     |     |     | You | WIN |  !  |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	5	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	6	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	7	| w_p | w_p | w_p | w_p | w_p | w_p | w_p | w_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	8	| w_r | w_h | w_e | w_Q | w_K | w_e | w_h | w_r |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << endl;
	cout << "				YOUR SCORE IS --> " << user.get_level()    << endl;
}

void board_loss(User& user)
{
	cout << "		   a     b     c     d     e     f     g     h   " << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	1	| b_r | b_h | b_e | b_Q | b_K | b_e | b_h | b_r |" << endl;
	cout << "	 	+-----+-----+-----+-----+-----|-----+-----+-----+" << endl;
	cout << "	2	| b_p | b_p | b_p | b_p | b_p | b_p | b_p | b_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	3	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	4	|     |     |     | You | LOSE|  !  |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	5	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	6	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	7	| w_p | w_p | w_p | w_p | w_p | w_p | w_p | w_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	8	| w_r | w_h | w_e | w_Q | w_K | w_e | w_h | w_r |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << endl;
	cout << "				YOUR SCORE IS --> " << user.get_level()    << endl;
}

void about()
{
	cout << endl;
	cout << "This is a Chess project written in C++ using OOP and its core concepts." << endl;
	cout << endl;
	cout << "Enjoy!" << endl;
	cout << "\nJuly 04, 2022" << endl; 
}

void license()
{
	cout << "MIT License" << endl;
	cout << endl;
	cout << "Copyright (c) 2022 Elvin Suleymanov" << endl;
	cout << endl;
	cout << "Permission is hereby granted, free of charge, to any person obtaining a copy" << endl;
	cout << "of this software and associated documentation files (the 'Software'), to deal" << endl;
	cout << "in the Software without restriction, including without limitation the rights" << endl;
	cout << "to use, copy, modify, merge, publish, distribute, sublicense, and/or sell" << endl;
	cout << "copies of the Software, and to permit persons to whom the Software is" << endl;
	cout << "furnished to do so, subject to the following conditions:" << endl;
	cout << endl;
	cout << "The above copyright notice and this permission notice shall be included in all" << endl;
	cout << "copies or substantial portions of the Software." << endl;
	cout << endl;
	cout << "THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR" << endl;
	cout << "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY," << endl;
	cout << "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE" << endl;
	cout << "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER" << endl;
	cout << "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM," << endl;
	cout << "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE" << endl;
	cout << "SOFTWARE." << endl;
}

void error()
{
    cout << "If you have any problems or difficulties with the program, then write about it in a special discussion chat that is located inside the repository of this project. link: https://github.com/suleymanovdev/cppchess/discussions/categories/errors" << endl;
}