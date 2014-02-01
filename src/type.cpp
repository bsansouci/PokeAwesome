#include "type.h"
#include "type.h"

Type::Type(){
}

Type::Type(std::string name, std::list<Type*> se, std::list<Type*> nve, std::list<Type*> imm){
    this->name = name;
    this->se = se;
    this->nve = nve;
    this->imm = imm;
}

Type::Type(std::string name, Type *se[], Type *nve[], Type *imm[], int se_size, int nve_size, int imm_size){
    this->name = name;
//    for (int i = 0; i < se_size; ++i){
//        this->se.push_back(*(se+i));
//        std::cout << this->se.back()->name << std::endl;
//    }
    if (se_size > 0)
        this->se.assign(se, se+se_size);
    if (se_size > 0)
        this->nve.assign(nve, nve+nve_size);
    if (se_size > 0)
        this->imm.assign(imm, imm+imm_size);
}

Type::~Type(){
}

std::string Type::getName(){
    return this->name;
}

bool Type::isEffective(Type *type){
    for (std::list<Type*>::iterator it=this->se.begin(); it != this->se.end(); ++it){
        if (!type->name.compare((*it)->name)){
            return true;
        }
    }
    return false;
}

bool Type::isNotEffective(Type *type){
    for (std::list<Type*>::iterator it=this->nve.begin(); it != this->nve.end(); ++it){
        if (!type->name.compare((*it)->name)){
            return true;
        }
    }
    return false;
}

bool Type::isImmune(Type *type){
    for (std::list<Type*>::iterator it=this->imm.begin(); it != this->imm.end(); ++it){
        if (!type->name.compare((*it)->name)){
            return true;
        }
    }
    return false;
}