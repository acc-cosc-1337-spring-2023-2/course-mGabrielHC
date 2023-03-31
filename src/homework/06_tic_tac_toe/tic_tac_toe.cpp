//cpp
#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"

using std::cout;
using std::string;

//public
bool TicTacToe::game_over()
{
    if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }

    if(check_board_full() == true)
    {
        winner ="C";
        return true;
    }

    return false;
}

void TicTacToe::start_game(string first_player)
{
    if(first_player != "X" && first_player != "O")
    {
        cout<<"Invalid Input, please put in X or O."<<"\n";
        return;
    }
    player = first_player;

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;

    if(!game_over())
    {
        set_next_player();
    }
}

void TicTacToe::display_board() const
{

 std::cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"\n";
 std::cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"\n";
 std::cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n";

}
//private

bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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

void TicTacToe::set_winner()
{
    winner = player;
}

void TicTacToe::set_next_player()
{

    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < 9; i++)
    {
        if(pegs[i] != " ")
        {
            pegs[i] = " ";
        }
    }
}