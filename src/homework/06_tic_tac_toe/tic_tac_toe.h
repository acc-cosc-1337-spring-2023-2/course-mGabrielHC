//h
#include<iostream>
#include<vector>
#include<string>

using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::ostream;
using std::istream;

class TicTacToe
{
    friend class TicTacToeManager;
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);

    public:
        TicTacToe() = default;
        TicTacToe(int size): pegs(size * size, " "){}
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        string get_player() const{return player;}
        string get_winner() const{return winner;}

    private:
        void set_winner();
        void set_next_player();
        bool check_board_full();
        void clear_board();
        //Class privaye data
        string winner;
        std::string player;
    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
};

#endif













