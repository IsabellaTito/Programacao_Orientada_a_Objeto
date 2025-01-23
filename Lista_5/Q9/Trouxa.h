#pragma once

#include <string>
#include <iostream>
#include "Humano.h"

using std::string, std::cout, std::endl;

class Trouxa : public Humano{
    public:
        Trouxa(string nome, int idade, string prof):Humano(nome, idade), profissao(prof){}

        void setProfissao(string prof){profissao=prof;}
        string getProfissao()const{return profissao;}

    private:
        string profissao;
};