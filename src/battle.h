/* 
 * File:   battle.h
 * Author: Eric
 *
 * Created on January 21, 2014, 3:57 PM
 */

#ifndef BATTLE_H
#define	BATTLE_H

class Player;
class Pokemon;

class Battle{
public:
    Battle(Player *p1, Player *p2);
    Player *getPlayerOne();
    Player *getPlayerTwo();
private:
    Player *p1;
    Player *p2;
};

#include "player.h"
#include "pokemon.h"

#endif	/* BATTLE_H */

