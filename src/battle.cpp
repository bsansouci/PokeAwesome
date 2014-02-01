#include "battle.h"

Battle::Battle(Player* p1, Player* p2){
    this->p1 = p1;
    this->p2 = p2;
}

Player *Battle::getPlayerOne(){
    return this->p1;
}

Player *Battle::getPlayerTwo(){
    return this->p2;
}