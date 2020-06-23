#ifndef _FOOTCOMMANDER__H
#define _FOOTCOMMANDER__H
#include <stdio.h>
#include "Soldier.hpp"
#include "FootSoldier.hpp"
#include <vector>
#include <iostream>



class FootCommander : public Soldier {
protected:
int initial=150;
int DPA=20;
 public:
FootCommander (int number): Soldier(number){
(this)->setIH(initial);
}
~FootCommander(){
delete (this);
}
int getInit() override;


void Ability(std::pair<int,int> source , std::vector<std::vector<Soldier*>> &board,int x, int y)  override;
};
#endif
