#include <iostream>
#include <string>
#include "additional_files/classes.h"
#include "additional_files/menus.h"
#include "additional_files/functions.h"
using namespace std;

int main()
{
    string sys; // Your System Name.
    
    // Creating arrays.
    // 1. Board with figures.
    // 2. White killed figures.
    // 3. Black killed figures.
    
    Figure* board_arr[8][8] = {
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
    };

    Figure* killed_white_figures_arr[15] = {};
    Figure* killed_black_figures_arr[15] = {};

    // Creating user.
    User user;

    // Data for cycle.
    int welcome_choose = 0;

    // Entering system name.
    cout << "Ou. Hello! Enter your system name:> ";
    cin >> sys;
    
    // Cycle.
    while (true)
    {
        clear(sys);
        banner();
        welcome();
        cout << "    choose(welcome):> ";
        cin >> welcome_choose;
        if (welcome_choose == 1)
        {
            clear(sys);
            banner();
            reg_and_login();
            press_to_continue();
        }
        else if (welcome_choose == 2)
        {
            boardinfo();
            press_to_continue();
        }
        else if (welcome_choose == 3)
        {
            
        }
        else if (welcome_choose == 4)
        {
            
        }
        else if (welcome_choose == 5)
        {
            
        }
        else
        {
            clear(sys);
            cout << "Err: In main() function." << endl;
            error();
            exit(0);
        }
    }
    
    return 0;
}