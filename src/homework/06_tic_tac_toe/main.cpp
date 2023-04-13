#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() 
{
	string continue_game = " ";
	string first_player = " ";
	string winner = " ";
	int o = 0;
	int w = 0;
	int t = 0;

	TicTacToeManager manager;

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
		

		TicTacToe game(size);

		game.start_game(first_player);

		while(game.game_over() == false)
		{
			cin>>game;
			cout<<game<<"\n";
		}

		cout<<"The winner is player: "<<game.get_winner()<<"\n";

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