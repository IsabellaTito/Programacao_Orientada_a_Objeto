#pragma once

#include <string>

using std::string;

class Livro{
    public:
        Livro(string T, int ano, int pags, string cont);

        void setTitulo(string T);
        void setAno(int ano);
        void setPags(int pags);
        void setConte(string conteu);

        string getTitulo() const{return titulo;}
        int getAno()const{return ano;}
        int getPags()const{return n_pags;}
        string getConte()const{return conteudo;}

        virtual void ler() const;

    private:
        string titulo;
        int ano;
        int n_pags;
        string conteudo;

};