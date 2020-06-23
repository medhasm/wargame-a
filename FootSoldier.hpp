
#ifndef _FOOTSOLDIER__H
#define _FOOTSOLDIER__H
#include <stdio.h>
#include "Soldier.hpp"
#include <vector>


class FootSoldier : public Soldier {
protected:
 int init= 100;
int DPA = 10;
public:

FootSoldier (int number): Soldier(number){(this)->setIH(init);} //bdekat et5ol soldier
~FootSoldier(){
delete (this);
}
int getInit() override;
void Ability(std::pair<int,int> source, std::vector<std::vector<Soldier*>> &board,int x,int y) override;



};


#endif
