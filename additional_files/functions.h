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

/*
	Board letter to int.
*/

int lti(char coor[], int x)
{
	if (coor[x] == 'a') {return 0;}
	else if (coor[x] == 'b') {return 1;}
	else if (coor[x] == 'c') {return 2;}
	else if (coor[x] == 'd') {return 3;}
	else if (coor[x] == 'e') {return 4;}
	else if (coor[x] == 'f') {return 5;}
	else if (coor[x] == 'g') {return 6;}
	else if (coor[x] == 'h') {return 7;}
	else {return 0;}
}

int ltl(char coor[], int x)
{
	if (coor[x] == '1') {return 0;}
	else if (coor[x] == '2') {return 1;}
	else if (coor[x] == '3') {return 2;}
	else if (coor[x] == '4') {return 3;}
	else if (coor[x] == '5') {return 4;}
	else if (coor[x] == '6') {return 5;}
	else if (coor[x] == '7') {return 6;}
	else if (coor[x] == '8') {return 7;}
	else {return 0;}
}

// void lti(char coor[])
// {
// 	for (int i = 97; i < 105; i++)
// 	{
// 		if (coor[0] == char(i))
// 		{
// 			coor[0] = char(i - 49);
// 		}
// 		if (coor[2] == char(i))
// 		{
// 			coor[2] = char(i - 49);
// 		}
// 	}
// }

//void func(char coor[], Figure** board_arr)
//{
//	// board_arr[(int(coor[3]) - 97)][(int(coor[2]) - 97)] = board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)];
//    board_arr[(int(coor[3]) - 97)][(int(coor[2]) - 97)] = new board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)];
//	delete & board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)];
//	board_arr[(int(coor[1]) - 97)][(int(coor[0]) - 97)] = nullptr;
//}