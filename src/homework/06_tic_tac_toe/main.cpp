#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() 
{
	string continue_game = " ";
	string first_player = " ";
	string winner = " ";

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
		

		TicTacToe game;

		game.start_game(first_player);

		while(game.game_over() == false)
		{
			int position = 0;
			cout<<"Enter a position from 1 to 9: ";
			cin>>position;

			while(position < 1 || position > 9)
			{
				cout<<"Please enter a number from 1 to 9: "<<"\n";
				cin>>position;
			}

			game.get_player();
			game.mark_board(position);
			game.display_board();
		}

		cout<<"The winner is player: "<<game.get_winner()<<"\n";
		cout<<"continue?(Y/N): ";
		cin>>continue_game;

	} while (continue_game == "Y" || continue_game == "y");

	return 0;
}