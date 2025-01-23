#pragma once

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Humano{
    public:
        Humano(string n, int d);

        void setNome(string n);
        void setIdade(int d);

        string getNome() const {return nome;}
        int getIdade()const {return idade;}

        void vassoura() const{cout <<"Mero Mortal "<< getNome() << ", so usa a vassoura para varrer a casa!"<<endl;}

        void jogar() const{cout<<"Mero Mortal " << getNome() << ", so joga pedra!"<<endl;}

    private:
        string nome;
        int idade;

};