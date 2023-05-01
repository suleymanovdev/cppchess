#include <iostream>
#include <string>
using namespace std;

class Pawn : public Figure 
{
private:
	bool first_action;
public:
	Pawn()
	{
		first_action = false;
	}
	void set_first_action(bool first_action) override { this->first_action = first_action; }
	bool get_first_action() override { return this->first_action; }
	void info()	{ cout << "NAME: " << get_name() << endl;	cout << "WEIGHT: " << get_weight() << endl;	}
	void move_white(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &w_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if (board_arr[yf][xf]->get_first_action() == false)
		{
			if ((xn == xf && yn == (yf - 1)) || (xn == xf && yn == (yf - 2)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					board_arr[yf][xf]->set_first_action(true);
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Foward.\n");
					press_to_continue();
				}
				else
				{
					printf("Err: Position is blocked.");
					press_to_continue();
				}
			}
			else if ((yn == (yf - 1) && xn == (xf - 1)) || (yn == (yf - 1) && xn == (xf + 1)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					printf("Err: You can't go to this positon because on this position no figures.\n");
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
							if (yn == 0)
							{
								user.set_level(user.get_level() + board_arr[yn][xn]->get_weight() + 5);
								board_arr[yn][xn] = &w_Q_temp;
								board_arr[yf][xf] = nullptr;
								player = BLACK;
							}
							else
							{
								user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
								board_arr[yn][xn] = board_arr[yf][xf];
								board_arr[yf][xf] = nullptr;
								player = BLACK;
							}
							printf("Right & Left.\n");
							press_to_continue();
						}
					}
				}
			}
		}
		else if (board_arr[yf][xf]->get_first_action() == true)
		{
			if (xn == xf && yn == (yf - 1))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Foward.\n");
					press_to_continue();
				}
				else
				{
					printf("Err: Position is blocked.");
					press_to_continue();
				}
			}
			else if ((yn == (yf - 1) && xn == (xf - 1)) || (yn == (yf - 1) && xn == (xf + 1)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					printf("You can't go to this positon because on this position no figures.\n");
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
							if (yn == 0)
							{
								user.set_level(user.get_level() + board_arr[yn][xn]->get_weight() + 5);
								board_arr[yn][xn] = &w_Q_temp;
								board_arr[yf][xf] = nullptr;
								player = BLACK;
							}
							else
							{
								user.set_level(user.get_level() + board_arr[yn][xn]->get_weight());
								board_arr[yn][xn] = board_arr[yf][xf];
								board_arr[yf][xf] = nullptr;
								player = BLACK;
							}
							printf("Right & Left.\n");
							press_to_continue();
						}
					}
				}
			}
		}
		else
		{
			printf("Err: Pawn first_action not false & true.\n");
			press_to_continue();
		}
	}
    void move_black(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &b_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if (board_arr[yf][xf]->get_first_action() == false)
		{
			if ((xn == xf && yn == (yf + 1)) || (xn == xf && yn == (yf + 2)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					board_arr[yf][xf]->set_first_action(true);
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Foward.\n");
					press_to_continue();
				}
				else
				{
					printf("Err: Position is blocked.");
					press_to_continue();
				}
			}
			else if ((yn == (yf + 1) && xn == (xf - 1)) || (yn == (yf + 1) && xn == (xf + 1)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					printf("Err: You can't go to this positon because on this position no figures.\n");
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
							game_result = false;
						}
						else
						{
							if (yn == 7)
							{
								board_arr[yn][xn] = &b_Q_temp;
								board_arr[yf][xf] = nullptr;
								player = WHITE;
							}
							else
							{
								board_arr[yn][xn] = board_arr[yf][xf];
								board_arr[yf][xf] = nullptr;
								player = WHITE;
							}
							printf("Right & Left.\n");
							press_to_continue();
						}
					}
				}
			}
		}
		else if (board_arr[yf][xf]->get_first_action() == true)
		{
			if (xn == xf && yn == (yf + 1))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Foward.\n");
					press_to_continue();
				}
				else
				{
					printf("Err: Position is blocked.");
					press_to_continue();
				}
			}
			else if ((yn == (yf + 1) && xn == (xf - 1)) || (yn == (yf + 1) && xn == (xf + 1)))
			{
				if (board_arr[yn][xn] == nullptr)
				{
					printf("You can't go to this positon because on this position no figures.\n");
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
							game_result = false;
						}
						else
						{
							if (yn == 7)
							{
								board_arr[yn][xn] = &b_Q_temp;
								board_arr[yf][xf] = nullptr;
								player = WHITE;
							}
							else
							{
								board_arr[yn][xn] = board_arr[yf][xf];
								board_arr[yf][xf] = nullptr;
								player = WHITE;
							}
							printf("Right & Left.\n");
							press_to_continue();
						}
					}
				}
			}
		}
		else
		{
			printf("Err: Pawn first_action not false & true.\n");
			press_to_continue();
		}
	}
};
