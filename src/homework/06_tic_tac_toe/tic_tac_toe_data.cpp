//cpp
#include"tic_tac_toe_data.h"
#include<fstream>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::string;
using std::ofstream;
using std::ifstream;

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream file("games.txt");

    if(file.is_open())
    {
        for(auto& game : games)
        {
            for(auto& peg : game->get_pegs())
            {
                file << peg;
            }
            file << game->get_winner()<<"\n";
        }
    }
    file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> boards;
    ifstream file("game.txt");

    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            vector<string> pegs;
            string winner;

            for (size_t i = 0; i < line.size() - 1; ++i)
            {
                pegs.push_back(string(1, line[i]));
            }

            winner = string(1, line.back());

            unique_ptr<TicTacToe> board;

            if (pegs.size() == 9)
            {
                board.reset(new TicTacToe3(pegs, winner));
            }
            else if (pegs.size() == 16)
            {
                board.reset(new TicTacToe4(pegs, winner));
            }

            boards.push_back(std::move(board));
        }
    }

    file.close();
    return boards;
}