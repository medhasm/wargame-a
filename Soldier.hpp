#ifndef _SOLDIER__H
#define _SOLDIER__H
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;
class Soldier{
protected:
uint PN;
int IH ;
public :
virtual int getInit() = 0;
double  pitagoras(std::pair<int,int> source , std::pair<int,int> target){
int aV=abs(source.first - target.first);

int bV=abs(source.second - target.second);

double cV=sqrt((bV*bV) + (aV*aV));

return cV;
}

Soldier( uint player_number): PN(player_number){};

virtual void setPN(uint player_number){

PN=player_number;
}

virtual uint getPN()  {
return this->PN;
}

virtual int getIH() {
return IH;
}
virtual void setIH(int number) {

this->IH= number;

}

virtual void Ability(std::pair<int,int> source, std::vector<std::vector<Soldier*>> &board,int x , int y) =0;

};

#endif
