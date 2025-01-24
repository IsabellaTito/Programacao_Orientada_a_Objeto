#pragma once

#include "PessoaFisica.h"
#include <string>

using std::string;

class Cliente : public PessoaFisica{
    friend ostream &operator<<(ostream &out, const Cliente &p){
            out << "Nome da Cliente: " << p.getNome() <<endl;
            out << "CPF: " << p.getCPF() << endl;
            out << "Endereco: " << p.getEndereco() <<endl;
            out << "Telefone: " << p.getTelefone() <<endl;
            return out;
        }
    public:
        Cliente(string nome, string cpf, string end, int telefone): PessoaFisica(nome,cpf){setEndereco(end);setTelefone(telefone);}

        void setEndereco(string end){endereco=end;}
        void setTelefone(int tele){telefone=tele;}

        string getEndereco()const{return endereco;}
        int getTelefone()const{return telefone;}

    private:
        string endereco;
        int telefone;

};