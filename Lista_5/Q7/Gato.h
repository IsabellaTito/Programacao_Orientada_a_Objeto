#pragma once

#include <string>
#include <iostream>
#include "Animal.h"

using std::string, std::cout, std::endl;

class Gato : public Animal{
    public:
        Gato() : Animal(){}

        Gato(string nome) : Animal(nome){}

        string mia(){return "Miau";}

        string Ataca(){return "MIAAAAAAAAU";}

    private:

};