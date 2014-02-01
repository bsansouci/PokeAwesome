/* 
 * File:   type.h
 * Author: Eric
 *
 * Created on January 21, 2014, 4:03 PM
 */

#ifndef TYPE_H
#define	TYPE_H

#include <iostream>
#include <string>
#include <list>

class Type{
public:
    Type();
    Type(std::string name, std::list<Type*> se, std::list<Type*> nve, std::list<Type*> imm);
    Type(std::string name, Type *se[], Type *nve[], Type *imm[], int se_size, int nve_size, int imm_size); // Super effective, not very effective, immunity
    ~Type();
    std::string getName();
    bool isEffective(Type *type);
    bool isNotEffective(Type *type);
    bool isImmune(Type *type);
//private:
    std::string name;
    std::list<Type*> se;
    std::list<Type*> nve;
    std::list<Type*> imm;
};

#endif	/* TYPE_H */

