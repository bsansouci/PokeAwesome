/* 
 * File:   main.cpp
 * Author: Eric
 *
 * Created on January 21, 2014, 3:57 PM
 */

#include <cstdlib>
#include "type.h"
#include "game.h"

using namespace std;

int main(int argc, char** argv) {
    Game game = Game();
    return game.run();
}

