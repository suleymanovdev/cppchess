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

// void go(Figure* obj, char coor[])
// {
	
// }

/*
	Board letter to int.
*/
void lti(char coor[])
{
	for (int i = 97; i < 105; i++)
	{
		if (coor[0] == char(i))
		{
			coor[0] = char(i - 49);
		}
		if (coor[2] == char(i))
		{
			coor[2] = char(i - 49);
		}
	}
}

void func(char coor[], Figure** board_arr)
{
	board_arr[(int(coor[3]) - 97)][(int(coor[2]) - 97)] = board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)];
	board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)] = nullptr;
}