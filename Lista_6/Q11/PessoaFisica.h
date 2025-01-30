#pragma once

#include <iostream>
#include <string>
//#include <format>
#include "Contato.h"

using std::cout, std::endl, std::string;//std::format;

class PessoaFisica : public Contato{
    public:
        PessoaFisica(string n, string end, string email, string cpf, string data, string estado):Contato(n,end,email),CPF{cpf},datanasc{data},estado_civil{estado}{}

        void setCPF(string cpf){CPF=cpf;}
        void setDataN(string data){datanasc=data;}
        void setEstado_civil(string estado){estado_civil=estado;}

        string getCPF()const{return CPF;}
        string getDataN()const{return datanasc;}
        string getEstado_civil()const{return estado_civil;}

        string imprimir_contato()const override{ 
            return "CPF: " + getCPF() + "\nNome: " + getNome() + "\nEndereco: " + getEndereco() + "\nData de Nascimento: " + getDataN() + "\nEmail: " + getEmail() +  "\nEstado Civil: " + getEstado_civil();
            //return format("CPF: {} \n Nome: {} \n Endereco: {} \n Data de Nascimento: {} \n Email: {} \n Estado Civil: {} ",CPF,nome,endereco,datanasc,email,estado_civil)<<endl<<endl;
        }

    private:
        string CPF;
        string datanasc;
        string estado_civil;
};