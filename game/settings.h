#include <iostream>
#include <string>
using namespace std;

class Settings
{
private:
	string sys;
public:
	Settings()
	{
		sys = " ";
	}

	Settings(string sys)
	{
		this->sys = sys;
	}

	void set_sys_name(string sys)
	{
		this->sys = sys;
	}

	string get_sys_name() { return sys; }

	void press_to_continue()
	{
		cout << endl;
		cout << "Press to continue....";
		cin.ignore();
	}

	void clear_terminal()
	{
		if (sys == "windows" || sys == "win" || sys == "Windows")
		{
			system("cls");
		}
		else if (sys == "linux" || sys == "lin" || sys == "Linux")
		{
			system("clear");
		}
		else
		{
			printf("[!] System Choosing Error. Restart program and choose one (windows or linux).");
		}
	}
};