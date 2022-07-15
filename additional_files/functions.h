#include <iostream>
#include <string>
using namespace std;

/*
	This is .h file for project functions.
*/

/*
    Terminal clear command.
*/
void clear(string system_name)
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

/*
    Press to continue command.
*/
void press_to_continue()
{
    cout << endl;
    cout << "Press to continue....";
    int a;
    cin >> a;
}

void go_function(Figure* obj, char arr[])
{
	
}