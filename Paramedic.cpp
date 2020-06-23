#include <stdio.h>
#include "Soldier.hpp"
#include "Paramedic.hpp"
#include <vector>


int Paramedic::getInit(){
return 0;
}

void Paramedic::Ability(std::pair<int,int> source ,std::vector<std::vector<Soldier*>> &board,int x , int y) {
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



(this)->setIH((this)->getInit());
*/
}

