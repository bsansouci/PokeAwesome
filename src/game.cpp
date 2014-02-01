#include "game.h"

Game::Game(){
    // INITIATION
    // Initiate random
    srand(time(NULL));
    
    // Defining Types
    // Initiating addresses for the individual types
    // <editor-fold defaultstate="collapsed" desc="Addresses">
    Normal = new Type();
    Fighting = new Type();
    Flying = new Type();
    Poison = new Type();
    Ground = new Type();
    Rock = new Type();
    Bug = new Type();
    Ghost = new Type();
    Steel = new Type();
    Fire = new Type();
    Water = new Type();
    Grass = new Type();
    Electric = new Type();
    Psychic = new Type();
    Ice = new Type();
    Dragon = new Type();
    Dark = new Type();
    Fairy = new Type(); // </editor-fold>
    
    // Assigning data to the 
    // <editor-fold defaultstate="collapsed" desc=" Assigning Data ">
    Type * normal_ve[] = {};
    Type * normal_nve[] = {Rock, Steel};
    Type * normal_imm[] = {Ghost};
    *Normal = Type("Normal", normal_ve, normal_nve, normal_imm, 0, 2, 1);

    Type * fighting_ve[] = {Normal, Rock, Steel, Ice, Dark};
    Type * fighting_nve[] = {Flying, Poison, Bug, Psychic, Fairy};
    Type * fighting_imm[] = {Ghost};
    *Fighting = Type("Fighting", fighting_ve, fighting_nve, fighting_imm, 5, 5, 1);

    Type * flying_ve[] = {Fighting, Bug, Grass};
    Type * flying_nve[] = {Rock, Steel, Electric};
    Type * flying_imm[] = {};
    *Flying = Type("Flying", flying_ve, flying_nve, flying_imm, 3, 3, 0);

    Type * poison_ve[] = {Grass, Fairy};
    Type * poison_nve[] = {Poison, Ground, Rock, Ghost};
    Type * poison_imm[] = {Steel};
    *Poison = Type("Poison", poison_ve, poison_nve, poison_imm, 2, 4, 1);

    Type * ground_ve[] = {Poison, Rock, Steel, Fire, Electric};
    Type * ground_nve[] = {Bug, Grass};
    Type * ground_imm[] = {Flying};
    *Ground = Type("Ground", ground_ve, ground_nve, ground_imm, 5, 2, 1);

    Type * rock_ve[] = {Flying, Bug, Fire, Ice};
    Type * rock_nve[] = {Fighting, Ground, Steel};
    Type * rock_imm[] = {};
    *Rock = Type("Rock", rock_ve, rock_nve, rock_imm, 4, 3, 0);

    Type * bug_ve[] = {Grass, Psychic, Dark};
    Type * bug_nve[] = {Fighting, Flying, Poison, Ghost, Steel, Fire, Fairy};
    Type * bug_imm[] = {Ghost};
    *Bug = Type("Bug", bug_ve, bug_nve, bug_imm, 3, 7, 1);

    Type * ghost_ve[] = {Ghost, Psychic};
    Type * ghost_nve[] = {Dark};
    Type * ghost_imm[] = {Normal};
    *Ghost = Type("Ghost", ghost_ve, ghost_nve, ghost_imm, 2, 1, 1);

    Type * steel_ve[] = {Rock, Ice, Fairy};
    Type * steel_nve[] = {Steel, Fire, Water, Electric};
    Type * steel_imm[] = {};
    *Steel = Type("Steel", steel_ve, steel_nve, steel_imm, 3, 4, 0);

    Type * fire_ve[] = {Bug, Steel, Grass, Ice};
    Type * fire_nve[] = {Rock, Fire, Water, Dragon};
    Type * fire_imm[] = {};
    *Fire = Type("Fire", fire_ve, fire_nve, fire_imm, 4, 4, 0);

    Type * water_ve[] = {Ground, Rock, Fire};
    Type * water_nve[] = {Water, Grass, Dragon};
    Type * water_imm[] = {};
    *Water = Type("Water", water_ve, water_nve, water_imm, 3, 3, 0);

    Type * grass_ve[] = {Ground, Rock, Water};
    Type * grass_nve[] = {Flying, Poison, Bug, Steel, Fire, Grass, Dragon};
    Type * grass_imm[] = {};
    *Grass = Type("Grass", grass_ve, grass_nve, grass_imm, 3, 7, 0);

    Type * electric_ve[] = {Flying, Water};
    Type * electric_nve[] = {Grass, Electric, Dragon};
    Type * electric_imm[] = {Ground};
    *Electric = Type("Electric", electric_ve, electric_nve, electric_imm, 2, 3, 1);

    Type * psychic_ve[] = {Flying, Poison};
    Type * psychic_nve[] = {Steel, Psychic};
    Type * psychic_imm[] = {Dark};
    *Psychic = Type("Psychic", psychic_ve, psychic_nve, psychic_imm, 2, 2, 1);

    Type * ice_ve[] = {Flying, Ground, Grass, Dragon};
    Type * ice_nve[] = {Steel, Fire, Water, Ice};
    Type * ice_imm[] = {};
    *Ice = Type("Ice", ice_ve, ice_nve, ice_imm, 4, 4, 0);

    Type * dragon_ve[] = {Dragon};
    Type * dragon_nve[] = {Steel};
    Type * dragon_imm[] = {Fairy};
    *Dragon = Type("Dragon", dragon_ve, dragon_nve, dragon_imm, 1, 1, 1);

    Type * dark_ve[] = {Ghost, Psychic};
    Type * dark_nve[] = {Fighting, Dark, Fairy};
    Type * dark_imm[] = {};
    *Dark = Type("Dark", dark_ve, dark_nve, dark_imm, 2, 3, 0);

    Type * fairy_ve[] = {Fighting, Dragon, Dark};
    Type * fairy_nve[] = {Poison, Steel, Fire};
    Type * fairy_imm[] = {};
    *Fairy = Type("Fairy", fairy_ve, fairy_nve, fairy_imm, 3, 3, 0);

    // </editor-fold>
    
    
}

bool Game::run(){
    initscr();
    start_color();
    // Initiate colours
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    
    Type *type1 = Electric;
    Type *type2 = Flying;
    
    printw("Type %s ", type1->getName().c_str());
    if (type1->isEffective(type2)){
        attron(COLOR_PAIR(1));
        printw("is super effective ");
    }
    else if (type1->isNotEffective(type2)){
        attron(COLOR_PAIR(3));
        printw("is not very effective ");
    }
    else if (type1->isImmune(type2)){
        attron(COLOR_PAIR(4));
        printw("doesn't affect ");
    }
    else{
        attron(COLOR_PAIR(2));
        printw("is normal ");
    }
    attron(COLOR_PAIR(2));
    printw("too %s.", type2->getName().c_str());
    getch();
    endwin();

    return 0;
}