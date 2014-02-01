#include "player.h"

Player::Player(std::string name){
    this->name = name;
    for (int i=0; i < 6; ++i){  // create empty array of NULL pointers
        this->pokemon[i] = NULL;
    }
}
