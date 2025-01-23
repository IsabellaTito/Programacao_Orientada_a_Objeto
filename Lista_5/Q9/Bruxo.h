#pragma once

#include <string>
#include <iostream>
#include "Humano.h"

using std::string;

class Bruxo : public Humano{

    public:
        Bruxo(string nome, int idade, string casa, string feitico);

        string getCasa() const;
        void setCasa(string casa);

        string getFeitico() const;
        void setFeitico(string feitico);

        void lancarFeitico() const;

        void jogar() const{cout<< getNome() <<" joga pedra e feitico! MUAHAHAHAHAHAHA"<<endl;}

        void vassoura() const{cout << getNome() << " usa a vassoura para voar!"<<endl;}

        void display() const;

    private:
        string hp_casa;
        string hp_feitico;

};