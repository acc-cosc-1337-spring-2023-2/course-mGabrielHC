//cpp
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::ostream;
using std::istream;
using std::string;

//public
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(move(b));
}

ostream& operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for(const auto& game : manager.games)
    {
        out << *game << "\n";
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
