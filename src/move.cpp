#include "move.h"

Move::Move(std::string name, Type* type, int moveId, int maxpp, int power, int accuracy){
    this->name = name;
    this->type = type;
    this->moveId = moveId;
    this->pp = maxpp;
    this->maxpp = maxpp;
    this->power = power;
    this->accuracy = accuracy;
}

Move::~Move(){
}

bool Move::addMoveFunc(move_function move){
    this->move = move;
}

int Move::useMove(Pokemon* pokemon1, Pokemon* pokemon2){
    // need to use status effects and whatnot
}