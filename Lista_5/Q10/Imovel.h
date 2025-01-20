#pragma once

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Imovel{
    public:
        Imovel(string end, double pre):endereco{end},preco(pre){}

        void setEndereco(string end){endereco = end;}
        void setPreco(double pre){preco=pre;}

        string getEndereco()const{return endereco;}
        double getPreco()const{return preco;} 

    protected:
        string endereco;
        double preco;

};