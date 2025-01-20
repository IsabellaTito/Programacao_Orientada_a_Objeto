#pragma once

#include "Imovel.h"

class ImovelNovo : public Imovel{
    public:
        ImovelNovo(string end, double preco, double add) : Imovel(end,preco),adicional(add){}

        void setAdicional(double add){adicional = add;}
        double getAdicional()const{return adicional;}

        double getPreco()const{return preco*(1+adicional/100);} 

    private:
        double adicional;

};