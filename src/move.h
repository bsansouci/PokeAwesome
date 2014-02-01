/* 
 * File:   move.h
 * Author: Eric
 *
 * Created on January 22, 2014, 12:44 AM
 */

#ifndef MOVE_H
#define	MOVE_H

#include <string>
#include <cstdlib>
#include "type.h"

class Pokemon;
class Battle;

typedef int (*move_function)(Battle *, Type *, int);

class Move{
public:
    Move(std::string name, Type *type, int moveId, int maxpp, int power=0, int accuracy=0);
    ~Move();
    bool addMoveFunc(move_function move);
    int useMove(Pokemon *pokemon1, Pokemon *pokemon2); // -1 missed, 0 is failed, 1 if worked
private:
    std::string name;
    Type *type;
    int moveId;
    int pp, maxpp;
    int power;
    int accuracy; // see if the move went through
    move_function move; // returns the int for state of how things worked out
};

#include "pokemon.h"
#include "battle.h"

#endif	/* MOVE_H */

