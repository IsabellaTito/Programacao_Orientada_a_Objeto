#pragma once

#include "Bruxo.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout, std::endl, std::string, std::vector,std::ostream;

class ExpressoHogwarts{

    friend ostream &operator<<(ostream&,const ExpressoHogwarts &);

    public:
        ExpressoHogwarts(int tam);

        //EMBARQUE DE BRUXOS
        ExpressoHogwarts& operator<<(Bruxo);

        //DESEMBARQUE DE BRUXOS
        ExpressoHogwarts& operator>>(Bruxo);
        ExpressoHogwarts& operator>>(const string nome);

    private:
        vector<Bruxo>passageiros;
        int tam;
};