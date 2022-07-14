#include <iostream>
#include <string>
using namespace std;

void board_print(Figure** board_arr)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << " | " << board_arr[i][j].get_name() << " | "<< endl;
        }
    }
}