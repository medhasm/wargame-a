#ifndef _PARAMEDIC__H
#define _PARAMEDIC__H
#include <stdio.h>
#include "Soldier.hpp"
#include <vector>


class Paramedic :public Soldier{
protected:
int initial=100;
public:
Paramedic (int number): Soldier(number){(this)->setIH(initial);} //bdekat et5ol soldier
~Paramedic(){
delete (this);
}
void Ability(std::pair<int,int> target,std::vector<std::vector<Soldier*>> &board,int x , int y) override; //virtual may needed
int getInit() override;

};
#endif
