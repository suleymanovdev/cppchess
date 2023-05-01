#include <iostream>
#include <string>
using namespace std;

class Figure
{
private:
    string name;
    string color;
    int weight = 0;
public:

    void set_color(string color)
    {
        this->color = color;
    }
    
    void set_weight(int weight)
    {
        this->weight = weight;
    }

    void set_name(string name)
    {
        this->name = name;
    }

    string get_name()
    {
        return this->name;
    }

    string get_color()
    {
        return this->color;
    }

    int get_weight()
    {
        return this->weight;
    }

    virtual void set_first_action(bool first_action) = 0;
    virtual bool get_first_action() = 0;
    virtual void move_white(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &w_Q_temp, int xf, int yf, int xn, int yn) = 0;
    virtual void move_black(Figure *board_arr[8][8], Play &player, User &user, bool &elep_res, bool &rook_res, bool &game_result, Figure &b_Q_temp, int xf, int yf, int xn, int yn) = 0;
};