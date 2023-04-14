#include "tic_tac_toe_3.h"



//private
bool TicTacToe3::check_column_win()
{
    if(pegs[0] == player && pegs[3] == player && pegs[6] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[1] == player && pegs[4] == player && pegs[7] == player)
    {
        set_winner();
        return true;
    }

    else if(pegs[2] == player && pegs[5] == player && pegs[8] == player)
    {
        set_winner();
        return true;
    }
    return false;
}

bool TicTacToe3::check_row_win()
{
    if(pegs[0] == player && pegs[1] == player && pegs[2] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[3] == player && pegs[4] == player && pegs[5] == player)
    {
        set_winner();
        return true;
    }

    else if(pegs[6] == player && pegs[7] == player && pegs[8] == player)
    {
        set_winner();
        return true;
    }
    return false;
}

bool TicTacToe3::check_diagonal_win()
{
    if(pegs[0] == player && pegs[4] == player && pegs[8] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[2] == player && pegs[4] == player && pegs[6] == player)
    {
        set_winner();
        return true;
    }

    return false;
}

