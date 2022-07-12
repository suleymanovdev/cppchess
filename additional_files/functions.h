#include <iostream>
#include <string>
using namespace std;

/*
	This is .h file for project functions.
*/

void clear(string system_name) // Terminal clear command.
{
    if (system_name == "win")
    {
        system("cls");
    }
    else if (system_name == "linux")
    {
        system("clear");
    }
    else
    {
        system("clear");
    }
}

void press_to_continue()
{
    cout << endl;
    cout << "Press to continue....";
    int a;
    cin >> a;
}