/**
 * Header file for the board of the war game.
 * 
 * You can copy this file to a new file called Board.hpp, and extend it as you like.
 * 
 * @author Oz Levi 
 * @author Erel Segal-Halevi
 * @since  2020-05
 */


#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
#include "Board.hpp"

using namespace WarGame;
using namespace std;
    // operator for putting soldiers on the game-board during initialization.
    Soldier*& WarGame::Board::operator[](std::pair<int,int> location){
    return board[location.first][location.second]; //shge2a
}
    
    // operator for reading which soldiers are on the game-board.
    Soldier* WarGame::Board::operator[](std::pair<int,int> location) const{
return board[location.first][location.second];

}

    
    void WarGame::Board::move(uint player_number, std::pair<int,int> source, Board::MoveDIR direction){

    /*
std::pair<int,int> MT; 
if((*this)[source] == nullptr || (*this)[source]->getPN() != player_number){
//throw  std::invalid_argument( "this soldier  does not belong to this player" ); 
}

          


if(direction ==  Board::MoveDIR::Up){

if( source.first+1 < board.size() && (*this)[{source.first+1 , source.second}] == nullptr){
(*this)[{source.first +1,source.second}] = (*this)[source];
(*this)[source]=nullptr;
MT.first=source.first+1;
MT.second=source.second;
(*this)[MT]->Ability(MT,board,board.size(),board[0].size()); 

}else{
 //throw  std::invalid_argument( "this move cant be done" );
}
}

if(direction ==  Board::MoveDIR::Down){

if( source.first -1 >= 0 && (*this)[{source.first-1 , source.second}] == nullptr){
(*this)[{source.first -1,source.second}] = (*this)[source];
(*this)[source]=nullptr;
MT.first=source.first-1;
MT.second=source.second;


(*this)[MT]->Ability(MT,board,board.size(),board[0].size());

}else{
// throw  std::invalid_argument( "this move cant be done" );
}
}

if(direction ==  Board::MoveDIR::Right){

if( source.second + 1 < board.size() && (*this)[{source.first , source.second+1}] == nullptr){
(*this)[{source.first ,source.second+1}] = (*this)[source];
MT.first=source.first;
MT.second=source.second+1;
(*this)[source]=nullptr;
(*this)[MT]->Ability(MT,board,board.size(),board[0].size());
}else{
 //throw  std::invalid_argument( "this move cant be done" );
}
}

if(direction ==  Board::MoveDIR::Left){

if( source.second -1  >=0 && (*this)[{source.first , source.second-1}] == nullptr){
(*this)[{source.first ,source.second-1}] = (*this)[source];
MT.first=source.first;
MT.second=source.second-1;
(*this)[source]=nullptr;
(*this)[MT]->Ability(MT,board,board.size(),board[0].size());
}else{
 //throw  std::invalid_argument( "this move cant be done" );
}
}



*/
}

    // returns true iff the board contains one or more soldiers of the given player.
    bool WarGame::Board::has_soldiers(uint player_number) const{
/*
for(int i=0;i< board.size() ; i++) {
 for( int j=0 ;j< board[i].size();j++){
if(board[i][j]!= nullptr && board[i][j]->getPN() == player_number){

     return true;}
 }
}
*/
return false;
}
    
  

