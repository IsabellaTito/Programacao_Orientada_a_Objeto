#pragma once

#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

class Varinha{

    public:
        Varinha(string wood = "",string nuc = "",double comp=0):madeira{wood},nucleo{nuc},comprimento{comp}{}

        string getMadeira() const {return madeira;}
        string getNucleo() const {return nucleo;}
        double getComp() const {return comprimento;}

        void setMadeira(string madeira){this->madeira=madeira;}
        void setNucleo(string nuc){this->nucleo=nuc;}
        void setComp(double comp){this->comprimento=comp;}

        void display(){cout<<"A varinha de madeira "<<madeira<<" com nucleo de "<<nucleo<<" tem comprimento "<<comprimento<<endl;}

    private:
        string madeira;
        string nucleo;
        double comprimento;

};

