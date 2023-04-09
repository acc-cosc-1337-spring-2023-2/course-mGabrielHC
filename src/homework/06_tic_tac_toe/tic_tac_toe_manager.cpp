//cpp
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::ostream;
using std::istream;
using std::string;
using std::vector;

//public
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

ostream& operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for(const auto& game : manager.games)
    {
        out << game << "\n";
    }

    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;
}

//private

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}
