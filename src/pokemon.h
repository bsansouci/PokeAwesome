/* 
 * File:   pokemon.h
 * Author: Eric
 *
 * Created on January 21, 2014, 3:59 PM
 */

#ifndef POKEMON_H
#define	POKEMON_H

#include <list>
#include <string>
#include <map>
#include "type.h"

enum Gender {FEMALE, MALE, UNKNOWN};
class Move;

class Pokemon{
public:
    Pokemon();
    void addMove(Move *move, int position);
    void removeMove(int position);
    void replaceMove(Move *move, int position);
    Move *getMove(int position);
private:
    Move *moves[4];
    std::string name;
    std::string nick_name;
    Gender gender;
    int hp, max_hp, defense, speed, attack, sattack, sdefense, evasion, 
        accuracy, level; // base stats
    int iv_max_hp, iv_defense, iv_speed, iv_attack, iv_sattack, iv_sdefense; // Individual values
    int ev_max_hp, ev_defense, ev_speed, ev_attack, ev_sattack, ev_sdefense; // Effort value
    int mod_attack, mod_defense, mod_speed, mod_sattack, mod_sdefense,
        mod_accuracy, mod_evasion;
};

#include "move.h"

#endif	/* POKEMON_H */

