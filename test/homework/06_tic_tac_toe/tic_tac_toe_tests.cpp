#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify TicTacToe manager get winner total function")
{
	TicTacToeManager manager;
	int w = 0;
	int o = 0;
	int t = 0;

	TicTacToe game1;
	game1.start_game("X");
	game1.mark_board(1);
	game1.mark_board(2);
	game1.mark_board(4);
	game1.mark_board(5);
	game1.mark_board(7);
	REQUIRE(game1.game_over() == true);
	REQUIRE((game1.get_winner() == "X" || game1.get_winner() == "O"));
	manager.save_game(game1);
	manager.get_winner_total(o, w, t);
	REQUIRE(w == 1);

	TicTacToe game2;
	game2.start_game("O");
	game2.mark_board(1);
	game2.mark_board(2);
	game2.mark_board(4);
	game2.mark_board(5);
	game2.mark_board(7);
	REQUIRE(game2.game_over() == true);
	REQUIRE((game2.get_winner() == "X" || game2.get_winner() == "O"));
	manager.save_game(game2);
	manager.get_winner_total(o, w, t);
	REQUIRE(o == 1);

	TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(5);
	game3.mark_board(9);
	game3.mark_board(8);
	game3.mark_board(4);
	game3.mark_board(3);
	game3.mark_board(7);
	game3.mark_board(6);
	REQUIRE(game3.game_over() == true);
	REQUIRE((game3.get_winner() == "X" || game3.get_winner() == "O" || game3.get_winner() == "C"));
	manager.save_game(game3);
	manager.get_winner_total(o, w, t);
	REQUIRE(t == 1);

	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	manager.get_winner_total(o_win, x_win, ties);
	REQUIRE(x_win == 1);
	REQUIRE(o_win == 1);
	REQUIRE(ties == 1);
}


TEST_CASE(" Verify player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE(" Verify player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("verify Test win by first column")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("verify Test win by second column")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("verify Test win by third column")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("verify Test win by first row")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}
TEST_CASE("verify Test win by second row")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}
TEST_CASE("verify Test win by third row")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("Verify Test win diagonally from top left ")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("Verify Test win diagonally from bottom left ")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O"));
}

TEST_CASE("Verify Game over if 9 slots full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
	REQUIRE((game.get_winner() == "X" || game.get_winner() == "O" || game.get_winner() == "C"));
}

