/* 
 * File:   game.h
 * Author: Eric
 *
 * Created on January 21, 2014, 8:09 PM
 */

#ifndef GAME_H
#define	GAME_H

#include <cstdlib>
#include <ctime>
#include "type.h"
#include "curses.h"

class Game{
public:
    Game();
    bool run();
private:
    Type *Normal, *Fighting, *Flying, *Poison, *Ground, *Rock, *Bug,
     *Ghost, *Steel, *Fire, *Water, *Grass, *Electric, *Psychic,
     *Ice, *Dragon, *Dark, *Fairy;
};

#endif	/* GAME_H */

