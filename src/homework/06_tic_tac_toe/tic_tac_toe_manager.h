//h
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

using std::unique_ptr;
using std::ostream;
using std::istream;
using std::string;
using std::vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& data);
    ~TicTacToeManager();
    void save_game(unique_ptr<TicTacToe>& b);
    friend ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
    void get_winner_total(int& o, int& w, int& t);
private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
    TicTacToeData data;

};

#endif
