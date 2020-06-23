#include "doctest.h"
#include "Board.hpp"
#include <stdbool.h>
#include <string>
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Soldier.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"

using namespace std;
using namespace WarGame;

TEST_CASE("Foot soldiers") {

Board board(8,8);
//
    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new FootSoldier(1);
    //CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    //CHECK(board.has_soldiers(2));

board.move(1, {0,0}, Board::MoveDIR::Up); 
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 10);

board.move(1, {1,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 20);

board.move(1, {2,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 30);
board.move(1, {3,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 40);
board.move(1, {4,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 50);

board.move(1, {5,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 60);
board.move(1, {6,0}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit() - 70);
board.move(1, {6,1}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 80);

board.move(1, {6,2}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 90);
board.move(1, {6,3}, Board::MoveDIR::Right);  
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 100);
CHECK(!board.has_soldiers(2));

board[{7,2}]=new FootSoldier(2);
CHECK_THROWS(board.move(2, {7,2}, Board::MoveDIR::Left));

CHECK_THROWS(board.move(1, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,1}, Board::MoveDIR::Right));

board.move(2, {7,2}, Board::MoveDIR::Right);
CHECK(board.has_soldiers(2));

//CHECK( board[{6,4}]->getIH() == board[{6,4}]->getInit()- 10);

CHECK_THROWS(board.move(2, {7,3}, Board::MoveDIR::Down));

CHECK_THROWS(board.move(1, {6,3}, Board::MoveDIR::Up));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

}

TEST_CASE("Foot Commander") {

Board board(8,8);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new FootCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootCommander(2);
    CHECK(board.has_soldiers(2));
board.move(1, {0,0}, Board::MoveDIR::Up); 
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 10);

board.move(1, {1,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 20);

board.move(1, {2,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 30);
board.move(1, {3,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 40);
board.move(1, {4,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 50);
board.move(1, {5,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 60);
board.move(1, {6,0}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit() - 70);
board.move(1, {6,1}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 80);
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

board.move(1, {6,2}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 90);
board.move(1, {6,3}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 100);
CHECK(!board.has_soldiers(2));
board[{7,2}]=new FootCommander(2);
CHECK_THROWS(board.move(2, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,1}, Board::MoveDIR::Right));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));
board.move(2, {7,2}, Board::MoveDIR::Right);
CHECK(board.has_soldiers(2));
//CHECK( board[{6,4}]->getIH() == board[{6,4}]->getInit()- 10);
CHECK_THROWS(board.move(2, {7,3}, Board::MoveDIR::Down));
CHECK_THROWS(board.move(1, {6,3}, Board::MoveDIR::Up));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

}

TEST_CASE("Sniper") {

Board board(8,8);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new Sniper(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new Sniper(2);
    CHECK(board.has_soldiers(2));

board.move(1, {0,0}, Board::MoveDIR::Up); 
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 10);

board.move(1, {1,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 20);

board.move(1, {2,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 30);
board.move(1, {3,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 40);
board.move(1, {4,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 50);
board.move(1, {5,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 60);
board.move(1, {6,0}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit() - 70);
board.move(1, {6,1}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 80);
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

board.move(1, {6,2}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 90);
board.move(1, {6,3}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 100);
CHECK(!board.has_soldiers(2));
board[{7,2}]=new Sniper(2);
CHECK_THROWS(board.move(2, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,1}, Board::MoveDIR::Right));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));
board.move(2, {7,2}, Board::MoveDIR::Right);
CHECK(board.has_soldiers(2));
//CHECK( board[{6,4}]->getIH() == board[{6,4}]->getInit()- 10);
CHECK_THROWS(board.move(2, {7,3}, Board::MoveDIR::Down));
CHECK_THROWS(board.move(1, {6,3}, Board::MoveDIR::Up));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));


}
TEST_CASE("Sniper Commander") {

Board board(8,8);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new SniperCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new SniperCommander(2);
    CHECK(board.has_soldiers(2));
board.move(1, {0,0}, Board::MoveDIR::Up); 
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 10);

board.move(1, {1,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 20);

board.move(1, {2,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 30);
board.move(1, {3,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 40);
board.move(1, {4,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 50);
board.move(1, {5,0}, Board::MoveDIR::Up);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 60);
board.move(1, {6,0}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit() - 70);
board.move(1, {6,1}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 80);
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

board.move(1, {6,2}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 90);
board.move(1, {6,3}, Board::MoveDIR::Right);  
CHECK( board[{7,0}]->getIH() == board[{7,0}]->getInit()- 100);
CHECK(!board.has_soldiers(2));
board[{7,2}]=new SniperCommander(2);
CHECK_THROWS(board.move(2, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,2}, Board::MoveDIR::Left));
CHECK_THROWS(board.move(1, {7,1}, Board::MoveDIR::Right));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));
board.move(2, {7,2}, Board::MoveDIR::Right);
CHECK(board.has_soldiers(2));
//CHECK( board[{6,4}]->getIH() == board[{6,4}]->getInit()- 10);
CHECK_THROWS(board.move(2, {7,3}, Board::MoveDIR::Down));
CHECK_THROWS(board.move(1, {6,3}, Board::MoveDIR::Up));
CHECK(board.has_soldiers(2));
CHECK(board.has_soldiers(1));

}

