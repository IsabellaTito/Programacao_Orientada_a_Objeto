#include "Livro.h"

#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

Livro::Livro(string T, int ano, int pags, string cont){
    setTitulo(T);
    setAno(ano);
    setPags(pags);
    setConte(cont);
}

void Livro::setTitulo(string T){
    titulo = T;
}

void Livro::setAno(int ano){
   this->ano = ano > 0? ano : 0;
}

void Livro::setPags(int pags){
    pags > 0? n_pags = pags : n_pags=0;
}

void Livro::setConte(string conteu){
    conteudo = conteu;
}

void Livro::ler() const{
    cout<<"Titulo: " << getTitulo() << endl <<
        "Ano: " << getAno() << endl <<
        "Numero de paginas: " << getPags() << endl<<
        "Conteudo: " << getConte() <<endl;
}