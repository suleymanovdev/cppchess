#include <iostream>
#include <string>
using namespace std;

void clear(string system_name)
{
    if (system_name == win)
    {
        system("cls");
    }
    else if (system_name == linux)
    {
        system("clear");
    }
    else
    {
        system("cls");
    }
}