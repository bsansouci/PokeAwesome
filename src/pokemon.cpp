#include "pokemon.h"

Pokemon::Pokemon(std::map<std::string, int> values){
    for (int i=0; i < 4; ++i){ // create empty array of NULL pointers
        this->moves[i] = NULL;
    }
    
    // Initiate all the boring values in the pokemon
    
    // Not actual stats, just the base stats
    this->max_hp = values["max_hp"];
    this->hp = this->max_hp;
    this->defense = values["defense"];
    this->speed = values["speed"];
    this->attack = values["attack"];
    this->sattack = values["sattack"];
    this->sdefense = values["sdefense"];
    this->evasion = values["evasion"]; // should never be touched
    this->accuracy = values["accuracy"]; // should never be touched
    this->level = values["level"];
    
    // Individual value
    this->iv_max_hp
    int iv_maxhp, iv_defense, iv_speed, iv_attack, iv_sattack, iv_sdefense; // Individual values
    int ev_maxhp, ev_defense, ev_speed, ev_attack, ev_sattack, ev_sdefense; // Effort value
    int mod_attack, mod_defense, mod_speed, mod_sattack, mod_sdefense,
        mod_accuracy, mod_evasion;
}

void Pokemon::addMove(Move* move, int position){
    // Put move into the position in the array will delete not the previous move
    this->moves[position] = move;
}

void Pokemon::removeMove(int position){
    // Will remove AND delete the move in the position. Thus, subsequent calls
    // to the same pointer will result in error
    delete moves[position];
    moves[position] = NULL;
}

void Pokemon::replaceMove(Move* move, int position){
    // use when overriding moves
    this->removeMove(position);
    this->addMove(move, position);
}

Move *Pokemon::getMove(int position){
    return this->moves[position];
}