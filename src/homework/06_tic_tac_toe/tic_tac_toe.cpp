//cpp
#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"

using std::cout;
using std::string;
using std::ofstream;
using std::istream;

//friend

ostream& operator<<(ostream& out, const TicTacToe& game)
    {
        out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"\n";
        out<<game.pegs[3]<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"\n";
        out<<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<game.pegs[8]<<"\n";
        
        return out;
    }

istream& operator>>(istream& in, TicTacToe& game)
{
    int position = 0;
	cout<<"Enter a position from 1 to 9: ";
	in>>position;

    while(position < 1 || position > 9)
		{
			cout<<"Please enter a number from 1 to 9: "<<"\n";
			in>>position;
		}

    game.get_player();
	game.mark_board(position);

    return in;
}

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