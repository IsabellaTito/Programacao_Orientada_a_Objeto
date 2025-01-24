#pragma once

#include <string>
#include <iostream>
#include "Pessoa.h"

using std::cout, std::endl, std::string;

class PessoaFisica : public Pessoa{
    friend ostream &operator<<(ostream &out, const PessoaFisica &p){
            out << "Nome da pessoa Fisica: " << p.getNome() <<endl;
            out << "CPF: " << p.getCPF() << endl;
            return out;
        }

    public:
        PessoaFisica(string nome, string cpf):Pessoa(nome){setCPF(cpf);}

        void setCPF(string CPF){this->CPF = CPF;}
        string getCPF()const{return CPF;}

    private:
        string CPF;
      
};
