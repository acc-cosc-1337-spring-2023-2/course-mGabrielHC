#include "tic_tac_toe_4.h"

//private
bool TicTacToe4::check_column_win()
{
    if(pegs[0] == player && pegs[4] == player && pegs[8] == player && pegs[12] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[1] == player && pegs[5] == player && pegs[9] == player && pegs[13] == player)
    {
        set_winner();
        return true;
    }

    else if(pegs[2] == player && pegs[6] == player && pegs[10] == player && pegs[14] == player)
    {
        set_winner();
        return true;
    }
    else if(pegs[3] == player && pegs[7] == player && pegs[11] == player && pegs[15] == player)
    {
        set_winner();
        return true;
    }

    return false;
}

bool TicTacToe4::check_row_win()
{
    if(pegs[0] == player && pegs[1] == player && pegs[2] == player && pegs[3] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[4] == player && pegs[5] == player && pegs[6] == player && pegs[7] == player)
    {
        set_winner();
        return true;
    }

    else if(pegs[8] == player && pegs[9] == player && pegs[10] == player && pegs[11] == player)
    {
        set_winner();
        return true;
    }
    else if(pegs[12] == player && pegs[13] == player && pegs[14] == player && pegs[15] == player)
    {
        set_winner();
        return true;
    }

    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    if(pegs[0] == player && pegs[5] == player && pegs[10] == player && pegs[15] == player) 
    {
        set_winner();
        return true;
    }
    else if(pegs[3] == player && pegs[6] == player && pegs[9] == player && pegs[12] == player)
    {
        set_winner();
        return true;
    }
    
    return false;
}

/*
bool board_full = true;
    for(int i = 0; i < 16; i++)
    {
        if(pegs[i] == " ")
        {
            board_full = false;
            break;
        }
    }
    if(board_full)
    {
        winner = "C";
        return true;
    }
*/