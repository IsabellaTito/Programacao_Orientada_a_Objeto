#pragma once

#include "Imovel.h"

class ImovelVelho : public Imovel{
    public:
        ImovelVelho(string end, double pre, double desc): Imovel(end,pre), desconto(desc){}

        void setDesconto(double desc){desconto=desc;}
        double getDesconto()const{return desconto;}

        double getPreco()const{return preco*(1-desconto/100);} 
    private:
        double desconto;
};