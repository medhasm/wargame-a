#ifndef _SNIPER__H
#define _SNIPER__H
#include <stdio.h>
#include "Soldier.hpp"
#include <vector>


class Sniper :public Soldier{
protected:
 int init= 100;
int DPA= 50;
public:
int getInit() override;
Sniper (int number): Soldier(number){(this)->IH=init;} //bdekat et5ol soldier
~Sniper(){
delete (this);
}
void Ability(std::pair<int,int> source,std::vector<std::vector<Soldier*>> &board,int x , int y) override ; //virtual may needed







};
 #endif
