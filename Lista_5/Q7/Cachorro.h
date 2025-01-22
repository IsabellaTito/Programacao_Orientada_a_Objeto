#pragma once

#include <string>
#include <iostream>
#include "Animal.h"

using std::string, std::cout, std::endl;

class Cachorro : public Animal{
    public:
        Cachorro(): Animal(){}

        Cachorro(string nome): Animal(nome){};

        string late() const{ return "AUAUAUAU";}

        string rosna() const{return "RRRRRRRRR";}

    private:

};