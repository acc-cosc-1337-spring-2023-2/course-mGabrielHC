//h
#include<iostream>
#include<vector>
#include<string>

using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
    public:
        bool game_over(){return check_board_full();}
        void start_game(std::string first_player);
        void mark_board(int position);
        string get_player() const{return player;}
        void display_board() const;
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        std::vector<std::string> pegs = {9, " "};
        std::string player;
};

#endif