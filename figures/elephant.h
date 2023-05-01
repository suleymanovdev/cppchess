#include <iostream>
#include <string>
using namespace std;

class Elephant : public Figure 
{
public:
	void set_first_action(bool first_action) override {}
	bool get_first_action() override { return false; }
	void info() { cout << "NAME: " << get_name() << endl; cout << "WEIGHT: " << get_weight() << endl;}
	void move_white(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &w_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if (board_arr[yn][xn] != nullptr)
		{
			if (board_arr[yn][xn]->get_color() == "white")
			{
				cout << "You can't kill your figures." << endl;
			}
		}
		else if (xn > xf && yf > yn)
		{
			elep_res = true;
			for (int i = yf - 1; i > yn; i--)
			{
				for (int j = xf + 1; j < xn; j++)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "white")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
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
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Left-Down.
		else if (xf > xn && yf < yn)
		{
			elep_res = true;
			for (int i = yf + 1; i < yn; i++)
			{
				for (int j = xf - 1; j > xn; j--)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "white")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
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
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Left.
		else if (xf > xn && yf > yn)
		{
			elep_res = true;
			for (int i = yf - 1; i > yn; i--)
			{
				for (int j = xf - 1; j > xn; j--)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "white")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
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
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Right-Down.
		else if (xn > xf && yf < yn)
		{
			elep_res = true;
			for (int i = yf + 1; i < yn; i++)
			{
				for (int j = xf + 1; j < xn; j++)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "white")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
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
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = BLACK;
					printf("Forward.\n");
					press_to_continue();
				}
			}
		}
	}
    void move_black(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &b_Q_temp, int xf, int yf, int xn, int yn) override
	{
		if (xn > xf && yf > yn)
		{
			elep_res = true;
			for (int i = yf - 1; i > yn; i--)
			{
				for (int j = xf + 1; j < xn; j++)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "black")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
				{
					if (board_arr[yn][xn]->get_color() == "white")
					{
						if (board_arr[yn][xn]->get_name() == "w_K")
						{
							game_result = false;
						}
						else
						{
							board_arr[yn][xn] = board_arr[yf][xf];
							board_arr[yf][xf] = nullptr;
							player = WHITE;
							printf("You kill white figure.\n");
						}
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Left-Down.
		else if (xf > xn && yf < yn)
		{
			elep_res = true;
			for (int i = yf + 1; i < yn; i++)
			{
				for (int j = xf - 1; j > xn; j--)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "black")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
				{
					if (board_arr[yn][xn]->get_color() == "white")
					{
						if (board_arr[yn][xn]->get_name() == "w_K")
						{
							game_result = false;
						}
						else
						{
							board_arr[yn][xn] = board_arr[yf][xf];
							board_arr[yf][xf] = nullptr;
							player = WHITE;
							printf("You kill white figure.\n");
						}
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Left.
		else if (xf > xn && yf > yn)
		{
			elep_res = true;
			for (int i = yf - 1; i > yn; i--)
			{
				for (int j = xf - 1; j > xn; j--)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "black")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
				{
					if (board_arr[yn][xn]->get_color() == "white")
					{
						if (board_arr[yn][xn]->get_name() == "w_K")
						{
							game_result = false;
						}
						else
						{
							board_arr[yn][xn] = board_arr[yf][xf];
							board_arr[yf][xf] = nullptr;
							player = WHITE;
							printf("You kill white figure.\n");
						}
					}
				}
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Forward.\n");
				}
			}
		}
		// Diagonal Right-Down.
		else if (xn > xf && yf < yn)
		{
			elep_res = true;
			for (int i = yf + 1; i < yn; i++)
			{
				for (int j = xf + 1; j < xn; j++)
				{
					if (board_arr[i][j] != nullptr)
					{
						if (board_arr[i][j]->get_color() == "black")
						{
							printf("You can't kill your figures.\n");
							elep_res = false;
						}
					}
				}
			}
			if (elep_res == true)
			{
				if (board_arr[yn][xn] != nullptr)
				{
					if (board_arr[yn][xn]->get_color() == "white")
					{
						if (board_arr[yn][xn]->get_name() == "w_K")
						{
							game_result = false;
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
				else
				{
					board_arr[yn][xn] = board_arr[yf][xf];
					board_arr[yf][xf] = nullptr;
					player = WHITE;
					printf("Forward.\n");
					press_to_continue();
				}
			}
		}
	}
};

