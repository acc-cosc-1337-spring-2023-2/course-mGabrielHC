#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_data.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::unique_ptr;
using std::make_unique;

int main() 
{
	string continue_game = " ";
	string first_player = " ";
	string winner = " ";
	string game_type = " ";

	int o = 0;
	int w = 0;
	int t = 0;

	TicTacToeData data;
	TicTacToeManager manager(data);

	do
	{
		
		while (first_player != "X" && first_player != "O")
		{
			cout<<"Enter X or O: ";
			cin>>first_player;
			if(first_player != "X" && first_player != "O")
			{
				cout<<"Please enter a valid input: "<<"\n";
			}
		}
		

		unique_ptr<TicTacToe> game;

		while(game_type != "3" && game_type != "4")
		{
			cout<<"Choose between a 3 to win board or a 4 to win board of TicTacToe"<<"\n";
			cout<<"For a 3x3 board enter 3, for a 4x4 board, enter 4: ";
			cin>>game_type;
		}

		if(game_type == "3")
		{
			game = make_unique<TicTacToe3>();
		}
		else if (game_type == "4")
		{
			game = make_unique<TicTacToe4>();
		}

		game->start_game(first_player);

		while(game->game_over() == false)
		{
			cin>>*game;
			cout<<*game<<"\n";
		}

		cout<<"The winner is player: "<<game->get_winner()<<"\n";

		manager.save_game(game);
		manager.get_winner_total(o, w, t);

		cout<<"Player X wins: "<<w<<"\n";
		cout<<"Player O wins: "<<o<<"\n";
		cout<<"Tie game: "<<t<<"\n";

		cout<<"continue?(Y/N): ";
		cin>>continue_game;

	} while (continue_game == "Y" || continue_game == "y");

	cout<<"\nGames played: \n";
	cout<<manager;

	return 0;
}