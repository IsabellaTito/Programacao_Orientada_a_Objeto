#pragma once

#include<string>

using std::string;

class Pessoa{

    public:

        Pessoa(){}        
        Pessoa(string n, int i, float alt) : nome{n}, idade{i}, altura{alt}{}

        void setNome(string nome){this->nome = nome;}
        void setIdade(int idade){this->idade = idade;}
        void setAltura(float altura){this->altura = altura;}

        string getNome() const{return nome;}
        int getIdade() const{return idade;}
        float getAltura() const{return altura;}

        
    private:
        string nome;
        int idade;
        float altura;
};