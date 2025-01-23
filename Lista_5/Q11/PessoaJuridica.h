#pragma once

#include <string>
#include <iostream>
#include "Pessoa.h"

class PessoaJuridica : public Pessoa{
    friend ostream &operator<<(ostream &out, const PessoaJuridica &p){
            out << "Nome Fantasia: " << p.getNome() <<endl;
            out << "CNPJ: " << p.getCNPJ() << endl;
            out << "Razao Social: " << p.getRazao_social() << endl;
            return out;
        }
    public:
        PessoaJuridica(string nomeFant, string cnpj, string razao):Pessoa(nomeFant){
            setCNPJ(cnpj);
            setRazao_social(razao);
        }

        void setCNPJ(string cnpj){CNPJ = cnpj;}
        void setRazao_social(string razao){razao_social = razao;}

        string getCNPJ()const{return CNPJ;}
        string getRazao_social()const{return razao_social;}
        
    private:
        string CNPJ;
        string razao_social;
};