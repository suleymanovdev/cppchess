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

int addUser(User*& user_array, int& size, const string usrnm, const string pass, const int lvl, const bool reg)
{
	User* temp_array = new User[size + 1];
	User temp_user;
	temp_user.set_name(usrnm); temp_user.set_password(pass); temp_user.set_level(lvl); temp_user.set_regbool(reg);
	for (int i = 0; i < size; i++)
	{
		temp_array[i] = user_array[i];
	}
	temp_array[size] = temp_user;
	size++;
	delete[] user_array;
	user_array = temp_array;
	return 1;
}
int find_user_account(User *& user_account,int &size,string name_arg,string password_arg)
{
      for (int i = 0; i < size; i++)
    {
        if (user_account [i].Password == password_arg && user_account[i].Name == name_arg)
        {
            return i;
        }
    }
    return -1;
}