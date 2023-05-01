#include <iostream>
#include <string>
using namespace std;

class King : public Figure 
{
private:
	bool first_action;
public:
	King()
	{
		first_action = false;
	}
	void set_first_action(bool first_action) override { this->first_action = first_action; }
	bool get_first_action() override { return this->first_action; }
	void info() {cout << "NAME: " << get_name() << endl; cout << "WEIGHT: " << get_weight() << endl; }
	void move_white(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &w_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if ((yf == yn && xn == (xf + 1)) || (yf == yn && xn == (xf - 1)) || (xf == xn && yn == (yf + 1)) || (xf == xn && yn == (yf - 1)) || (xn == (xf + 1) && yn == (yf + 1)) || (xn == (xf + 1) && yn == (yf - 1)) || (xn == (xf - 1) && yn == (yf + 1)) || (xn == (xf - 1) && yn == (yf - 1)))
		{
			if (board_arr[yn][xn] == nullptr)
			{
				board_arr[yn][xn] = board_arr[yf][xf];
				board_arr[yf][xf] = nullptr;
				player = BLACK;
				printf("Forward.\n");
				press_to_continue();
			}
			else
			{
				if (board_arr[yn][xn]->get_color() == "white")
				{
					printf("Err: You can't kill your figures.\n");
					press_to_continue();
				}
				else
				{
					if (board_arr[yn][xn]->get_name() == "b_K")
					{
						user.set_level(user.get_level() + 10);
						game_result = true;
					}
					else
					{
						user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
						board_arr[yn][xn] = board_arr[yf][xf];
						board_arr[yf][xf] = nullptr;
						player = BLACK;
						printf("You kill black figure.\n");
						press_to_continue();
					}
				}
			}
		}
	}
    void move_black(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &b_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if ((yf == yn && xn == (xf + 1)) || (yf == yn && xn == (xf - 1)) || (xf == xn && yn == (yf + 1)) || (xf == xn && yn == (yf - 1)) || (xn == (xf + 1) && yn == (yf + 1)) || (xn == (xf + 1) && yn == (yf - 1)) || (xn == (xf - 1) && yn == (yf + 1)) || (xn == (xf - 1) && yn == (yf - 1)))
		{
			if (board_arr[yn][xn] == nullptr)
			{
				board_arr[yn][xn] = board_arr[yf][xf];
				board_arr[yf][xf] = nullptr;
				player = WHITE;
				printf("Forward.\n");
				press_to_continue();
			}
			else
			{
				if (board_arr[yn][xn]->get_color() == "black")
				{
					printf("Err: You can't kill your figures.\n");
					press_to_continue();
				}
				else
				{
					if (board_arr[yn][xn]->get_name() == "w_K")
					{
						game_result = true;
					}
					else
					{
						board_arr[yn][xn] = board_arr[yf][xf];
						board_arr[yf][xf] = nullptr;
						player = WHITE;
						printf("You kill white figure.\n");
						press_to_continue();
					}
				}
			}
		}
	}
};
