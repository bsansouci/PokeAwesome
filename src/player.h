/* 
 * File:   player.h
 * Author: Eric
 *
 * Created on January 21, 2014, 3:58 PM
 */

#ifndef PLAYER_H
#define	PLAYER_H

#include <string>

class Pokemon;

class Player{
public:
    Player(std::string name);
    void addPokemon(Pokemon *pokemon);
    void removePokemon(Pokemon *pokemon);
private:
    std::string name;
    Pokemon *pokemon[6];
};

#include "pokemon.h"

#endif	/* PLAYER_H */