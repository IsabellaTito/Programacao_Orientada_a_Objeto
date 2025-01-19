#pragma once

#include "string"
#include "iostream"

using std::string, std::cerr, std::cout, std::endl;

class Capa{

    public:
        Capa(double tam = 0, string casa = "Casa Inexistente"):tamanho{tam}{
            setCasa(casa);
        }

        void setTamanho(double tam){tamanho=tam;}
        void setCasa(string casa);

        double getTamanho()const{return tamanho;}
        string getCasa()const{return casa;}
        string getCor()const{return cor;}

        void display();


    private:
        double tamanho;
        string cor;
        string casa;
};