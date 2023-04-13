//cpp
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include "tic_tac_toe.h"


using std::cout;
using std::string;
using std::ofstream;
using std::istream;

//friend

ostream& operator<<(ostream& out, const TicTacToe& game)
    {
        int size = static_cast<int>(sqrt(game.pegs.size()));

        for(int i=0; i < size; i++)
        {
            for(int j=0; j < size; j++)
            {
                out<<game.pegs[i*size+j]<<"";
                if(j != size-1)
                {
                    out<<"|";
                }
            }
            out<<"\n";
        }

        return out;
    }

istream& operator>>(istream& in, TicTacToe& game)
{
    int position = 0;
	cout<<"Please enter a number from 1 to "<<game.pegs.size()<<":"<<"\n";
	in>>position;

    while(position < 1 || position > game.pegs.size())
		{
			cout<<"Please enter a number from 1 to"<<game.pegs.size()<<":"<<"\n";
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
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
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