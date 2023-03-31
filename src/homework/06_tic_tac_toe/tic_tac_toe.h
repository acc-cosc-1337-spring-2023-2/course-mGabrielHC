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
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        string get_player() const{return player;}
        void display_board() const;
        string get_winner(){return winner;}
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        void set_next_player();
        bool check_board_full();
        void clear_board();
        //Class privaye data
        string winner;
        std::vector<std::string> pegs = {9, " "};
        std::string player;
};

#endif