#include <iostream>
#include <string>
using namespace std;

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
        system("cls");
    }
}

void addNewUser(User*& arr, int& size, string username, string password, int level)
{
	/*
		1. Creating temp dinamic array and new user.
		2. Setting new characters for user.
		3. Sending old users to new array.
		4. Adding new user to new array.
	*/

	User* new_user_arr_temp = new User[size + 1];
	User NewUser;

	NewUser.set_username(username); 
	NewUser.set_password(password);
	NewUser.set_level(level);

	for (int i = 0; i < size; i++)
	{
		new_user_arr_temp[i] = arr[i];
	}

	new_user_arr_temp[size] = NewUser;
	size++;

	delete[] arr;
	arr = new_user_arr_temp;
}

int findUserIndex(User*& arr, int& size, string username, string password, int level)
{
	/*
		Searching user index by:
		1. Username.
		2. Password.
		3. Level (chess).
	*/

	for (int i = 0; i < size; i++)
	{
		if (arr[i].get_username() == username || arr[i].get_password() == password || arr[i].get_level() == level)
		{
			return i;
		}
	}
	return -1;
}

void press_to_continue()
{
	int a;
	cout << "Press any key to continue....";
	cin >> a;
}