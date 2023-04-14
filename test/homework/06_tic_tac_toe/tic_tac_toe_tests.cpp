#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::unique_ptr;
using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("verify TicTacToe manager get winner total function")
{
	TicTacToeManager manager;
	int w = 0;
	int o = 0;
	int t = 0;

	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
	game1->start_game("X");
	game1->mark_board(1);
	game1->mark_board(2);
	game1->mark_board(4);
	game1->mark_board(5);
	game1->mark_board(7);
	REQUIRE(game1->game_over() == true);
	REQUIRE((game1->get_winner() == "X" || game1->get_winner() == "O"));
	manager.save_game(game1);
	manager.get_winner_total(o, w, t);
	REQUIRE(w == 1);

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();
	game2->start_game("O");
	game2->mark_board(1);
	game2->mark_board(2);
	game2->mark_board(4);
	game2->mark_board(5);
	game2->mark_board(7);
	REQUIRE(game2->game_over() == true);
	REQUIRE((game2->get_winner() == "X" || game2->get_winner() == "O"));
	manager.save_game(game2);
	manager.get_winner_total(o, w, t);
	REQUIRE(o == 1);

	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(2);
	game3->mark_board(5);
	game3->mark_board(9);
	game3->mark_board(8);
	game3->mark_board(4);
	game3->mark_board(3);
	game3->mark_board(7);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == true);
	REQUIRE((game3->get_winner() == "X" || game3->get_winner() == "O" || game3->get_winner() == "C"));
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
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE(" Verify player set to O")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("verify Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by second column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by first row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}
TEST_CASE("verify Test win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}
TEST_CASE("verify Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("Verify Test win diagonally from top left ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("Verify Test win diagonally from bottom left ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("Verify Game over if 9 slots full")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O" || game->get_winner() == "C"));
}

*/

/*
TEST_CASE("verify TicTacToe manager get winner total function 4x4 board")
{
	TicTacToeManager manager;
	int w = 0;
	int o = 0;
	int t = 0;

	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe4>();
	game1->start_game("X");
	game1->mark_board(1);
	game1->mark_board(5);
	game1->mark_board(2);
	game1->mark_board(9);
	game1->mark_board(3);
	game1->mark_board(7);
	game1->mark_board(4);
	REQUIRE(game1->game_over() == true);
	REQUIRE((game1->get_winner() == "X" || game1->get_winner() == "O"));
	manager.save_game(game1);
	manager.get_winner_total(o, w, t);
	REQUIRE(w == 1);

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
	game2->start_game("O");
	game2->mark_board(1);
	game2->mark_board(5);
	game2->mark_board(2);
	game2->mark_board(9);
	game2->mark_board(3);
	game2->mark_board(7);
	game2->mark_board(4);
	REQUIRE(game2->game_over() == true);
	REQUIRE((game2->get_winner() == "X" || game2->get_winner() == "O"));
	manager.save_game(game2);
	manager.get_winner_total(o, w, t);
	REQUIRE(o == 1);

	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe4>();
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(2);
	game3->mark_board(5);
	game3->mark_board(9);
	game3->mark_board(8);
	game3->mark_board(4);
	game3->mark_board(3);
	game3->mark_board(7);
	game3->mark_board(6);
	game3->mark_board(10);
	game3->mark_board(12);
	game3->mark_board(16);
	game3->mark_board(14);
	game3->mark_board(15);
	game3->mark_board(13);
	game3->mark_board(11);
	REQUIRE(game3->game_over() == true);
	REQUIRE((game3->get_winner() == "X" || game3->get_winner() == "O" || game3->get_winner() == "C"));
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
*/
//--------------------------------------------------------------------------------------------------------------------

TEST_CASE(" Verify player set to X 4x4 board")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE(" Verify player set to O 4x4 board")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("verify Test win by first column 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}



TEST_CASE("verify Test win by second column 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by third column 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by fourth column 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}


TEST_CASE("verify Test win by first row 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by second row 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("verify Test win by fourth row 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}


TEST_CASE("Verify Test win diagonally from top left 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}

TEST_CASE("Verify Test win diagonally from bottom left ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
}


TEST_CASE("Verify Game over if 4x4 board slots full")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O" || game->get_winner() == "C"));
}


