//cpp
#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"

using std::cout;
using std::string;

void TicTacToe::start_game(string first_player)
{
    if(first_player != "X" && first_player != "O")
    {
        cout<<"Invalid Input, please put in X or O."<<"\n";
    }
    player = first_player;

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;

    set_next_player();
}

void TicTacToe::display_board() const
{

 std::cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"\n";
 std::cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"\n";
 std::cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n";

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