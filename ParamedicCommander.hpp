#ifndef _PARAMEDICCOMMANDER__H
#define _PARAMEDICCOMMANDER__H
#include <stdio.h>
#include "Soldier.hpp"
#include "Paramedic.hpp"
#include <vector>


class ParamedicCommander :public Soldier{
protected:
int initial =200;
public:
ParamedicCommander (int number): Soldier(number){(this)->setIH(initial);} //bdekat et5ol soldier
~ParamedicCommander(){
delete (this);
}
int getInit() override;

void Ability(std::pair<int,int> target,std::vector<std::vector<Soldier*>> &board,int x , int y) override;

};
#endif
