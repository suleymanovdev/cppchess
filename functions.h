#include <iostream>
using namespace std;

void clear(string sys)
{
	/*
		
	*/

	if (sys == "windows")
	{
		system("cls");
	}
	else if (sys == "linux")
	{
		system("clear");
	}
	else
	{
		cout << "[!] System Choosing Error. Restart program and choose one (windows or linux)." << endl;
	}
}

void loading()
{
    // Searching solutions for this.
    int i = 190;
}

void press_to_continue()
{
    cout << endl;
    cout << "Press to continue....";
    string a;
    cin >> a;
}

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
	if (coor[x] == '1') { return 0; }
	else if (coor[x] == '2') { return 1; }
	else if (coor[x] == '3') { return 2; }
	else if (coor[x] == '4') { return 3; }
	else if (coor[x] == '5') { return 4; }
	else if (coor[x] == '6') { return 5; }
	else if (coor[x] == '7') { return 6; }
	else if (coor[x] == '8') { return 7; }
	else { return 0; }
}
