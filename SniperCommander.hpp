#ifndef _SNIPERCOMMANDER__H
#define _SNIPERCOMMANDER__H
#include "Soldier.hpp"
#include "Sniper.hpp"
#include <stdio.h>
#include <vector>


class SniperCommander : public Soldier{
protected:
 int init= 120;
int DPA=100;
 public:


SniperCommander (int number): Soldier(number){(this)->setIH(init);}
~SniperCommander(){
delete (this);
}
int getInit() override;
void Ability(std::pair<int,int> source ,std::vector<std::vector<Soldier*>> &board,int x, int y) override;



};
#endif
