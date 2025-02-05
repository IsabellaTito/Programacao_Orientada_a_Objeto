#pragma once

#include <string>
#include <iostream>

using std::string;

class Bruxo{

    public:
        Bruxo(string nome, string casa, string feitico);

        string getNome() const;
        void setNome(string nome);

        string getCasa() const;
        void setCasa(string casa);

        string getFeitico() const;
        void setFeitico(string feitico);

        void lancarFeitico() const;

        void display() const;

    private:
        string hp_nome;
        string hp_casa;
        string hp_feitico;

};