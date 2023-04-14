//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe
{
    TicTacToe4() : TicTacToe(4){};
    
    public:
        bool game_over();

    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        bool check_board_full();

};

#endif