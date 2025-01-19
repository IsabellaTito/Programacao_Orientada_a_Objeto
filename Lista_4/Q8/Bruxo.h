#pragma once

#include <string>
#include <iostream>
#include "Capa.h"
#include "Varinha.h"

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

        void colocaCapa(Capa *capaP){capaBruxo = capaP;}

        void tiraCapa(){capaBruxo = nullptr;}

        void pegaVarinha(Varinha *varinhaP){varinhaBruxo = varinhaP;}

        void soltaVarinha(){varinhaBruxo = nullptr;}

    private:
        string hp_nome;
        string hp_casa;
        string hp_feitico;
        Varinha *varinhaBruxo;
        Capa *capaBruxo;

};