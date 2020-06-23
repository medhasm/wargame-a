







#include <stdio.h>
#include "Soldier.hpp"
#include "Paramedic.hpp"
#include <vector>
#include "ParamedicCommander.hpp"

int ParamedicCommander::getInit() {
return initial;
}

void ParamedicCommander::Ability(std::pair<int,int> source,std::vector<std::vector<Soldier*>> &board,int x , int y)  {//virtual may needed

/*
for(int i=source.first-1;i<source.first+1;i++){
for(int j=source.second-1 ;j<source.second+1;j++){
if(0<=i<x && 0<=j<y && !(i==source.first && j == source.second )){
if (board[i][j]!= nullptr && board[i][j]->getPN() == board[source.first][source.second]->getPN()){
int inili=board[i][j]->getInit();
board[i][j]->setIH( inili);
   }
      } 
        }
          }

for(int i=0; i< x ; i++){
  for(int j=0;j< y; j++) {
if(board[i][j]!= nullptr){
Soldier* soldier = board[i][j];
if(soldier->getPN() == board[source.first][source.second]->getPN() ){
if (dynamic_cast<Paramedic*>(board[i][j]) ){
std::pair<int,int> sour(i,j);
    soldier->Ability(sour,board, x , y);
      }
   }
}
}

    }

(this)->setIH((this)->getInit());

*/

} 
