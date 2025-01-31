#pragma once

#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout, std::endl, std::string, std::vector,std::ostream;

class ExpressoHogwarts{

    friend ostream &operator<<(ostream&,const ExpressoHogwarts &);

    public:
        ExpressoHogwarts(int tam);

        ~ExpressoHogwarts();

        //EMBARQUE DE BRUXOS
        ExpressoHogwarts& operator<<(const Bruxo &);
        ExpressoHogwarts& operator<<(const Trouxa &);
        ExpressoHogwarts& operator<<(const Humano &);

        //DESEMBARQUE DE BRUXOS
        ExpressoHogwarts& operator>>(const Humano &);
        ExpressoHogwarts& operator>>(const string nome);

        Humano* operator[](int);

    private:
        vector<Humano*>passageiros;
        int tam;
};