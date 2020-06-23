
#include "FootSoldier.hpp"
#include <stdio.h>
#include "Soldier.hpp"
#include <vector>

using namespace std;


int FootSoldier::getInit(){
return init;
}

void FootSoldier::Ability(std::pair<int,int> source,std::vector<std::vector<Soldier*>> &board,int x,int y)  {
/*
std::pair<int,int> target;
double Cav=100000;
for(int i=0;i< x ; i++) {
 for( int j=0 ; j < y; j++){
if(board[i][j]!= nullptr){
if(board[i][j]->getPN()!= board[source.first][source.second]->getPN() && board[i][j]->getIH() >0 ){
std::pair<int,int> tar(i,j);
double av= (this)->pitagoras(source,tar); 
if(av<=Cav){
Cav=av;
target=tar;
    }
        }
            }
                }
                     }

if(board[target.first][target.second]!= nullptr){
int enemyHP= board[target.first][target.second]->getIH();

board[target.first][target.second]->setIH(enemyHP - DPA);
if(board[target.first][target.second]->getIH() <= 0){
 board[target.first][target.second] = nullptr;
}
}
*/
}
