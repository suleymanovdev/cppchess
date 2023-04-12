#include <iostream>
#include <string>
#include "../figures/pawn/pawn.h"
#include "../figures/horse/horse.h"
#include "../figures/elephant/elephant.h"
#include "../figures/rook/rook.h"
#include "../figures/queen/queen.h"
#include "../figures/king/king.h"
using namespace std;

class Board
{
private:
	Pawn w_p1, w_p2, w_p3, w_p4, w_p5, w_p6, w_p7, w_p8, b_p1, b_p2, b_p3, b_p4, b_p5, b_p6, b_p7, b_p8;
	Horse w_h1, w_h2, b_h1, b_h2;
	Elephant w_e1, w_e2, b_e1, b_e2;
	Rook w_r1, w_r2, b_r1, b_r2;
	Queen w_Q, b_Q;
	King w_K, b_K;

	// Figure* board_arr[8][8] = {
	// 	{&b_r1, &b_h1, &b_e1, &b_Q, &b_K, &b_e2, &b_h2, &b_r2},
	// 	{&b_p1, &b_p2, &b_p3, &b_p4, &b_p5, &b_p6, &b_p7, &b_p8},
	// 	{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
	// 	{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
	// 	{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
	// 	{nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
	// 	{&w_p1, &w_p2, &w_p3, &w_p4, &w_p5, &w_p6, &w_p7, &w_p8},
	// 	{&w_r1, &w_h1, &w_e1, &w_Q, &w_K, &w_e2, &w_h2, &w_r2}
	// };
public:

};