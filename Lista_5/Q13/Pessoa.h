#pragma once

#include <string>
#include <iostream>

using std::string, std::ostream,std::endl;

class Pessoa{
        friend ostream &operator<<(ostream &out, const Pessoa &p){
            out << "Nome: " << p.getNome() <<endl;
            return out;
        }
    public:
        Pessoa(string nome):nome(nome){}

        void setNome(string nome){this->nome = nome;}
        string getNome() const{return nome;}

    protected:
        string nome;

};