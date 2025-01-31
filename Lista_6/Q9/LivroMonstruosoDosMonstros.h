#pragma once

#include "Livro.h"
#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class LivroMonstruosoDosMonstros : public Livro{
    public:
        LivroMonstruosoDosMonstros(string T, int ano, int pags, string cont) : Livro(T,ano,pags,cont){}

        void ler() const{cout<<"Mastiga, mastiga, mastiga, mastiga ..."<<endl;}
};