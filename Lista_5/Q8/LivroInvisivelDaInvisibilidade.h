#pragma once

#include "Livro.h"
#include <iostream>
#include <string>

using std::string, std::cout, std::endl;

class LivroInvisivelDaInvisibilidade : public Livro{
    public:
        LivroInvisivelDaInvisibilidade(string T, int ano, int pags, string cont) : Livro(T,ano,pags,cont){}

        void ler() const{cout<<" "<<endl;}
};