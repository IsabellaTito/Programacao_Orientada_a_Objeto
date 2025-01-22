#pragma once

#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

class Animal{
    public:
        Animal(){}

        Animal(string nome):nome(nome){}

        string caminha(){return getNome() + " esta caminhando";}

        void setNome(string nome){this->nome = nome;}
        void setRaca(string raca){this->raca = raca;}

        string getNome()const{return nome;}
        string getRaca()const{return raca;}

        void informacao(){
            cout << "Nome: " << getNome() <<endl<< "Raca: " << getRaca() << endl;
        }

    private:
        string nome;
        string raca;
};