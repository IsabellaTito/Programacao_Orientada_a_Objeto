#pragma once

#include <iostream>
//#include <format>
#include <string>
#include "Contato.h"

//using std::format;

class PessoaJuridica : public Contato{
    public:
        PessoaJuridica(string n, string end,string email,string cnpj, string inscricao,string razao) : Contato(n,end,email), CNPJ{cnpj},inscricao_estadual{inscricao},razao_social{razao}{}

        void setCNPJ(string cnpj){CNPJ=cnpj;}
        void setInscricao_estadual(string inscricao){inscricao_estadual=inscricao;}
        void setRazao_social(string razao){razao_social=razao;}

        string getCNPJ()const{return CNPJ;}
        string getInscricao_estadual()const{return inscricao_estadual;}
        string getRazao_social()const{return razao_social;}

        string imprimir_contato()const override{
            return "CNPJ: " + getCNPJ() + "\nNome: " + getNome() + "\nEndereco: " + getEndereco() + "\nEmail: " + getEmail() + "\nInscricao Estadual: " + getInscricao_estadual() + "\nRazao Social: " + getRazao_social();
            //return format("CNPJ: {} \n Nome: {} \n Endereco: {} \n Email: {} \n Inscricao Estadual: {} \n Razao Social: {}",CNPJ,nome,endereco,email,inscricao_estadual,razao_social)<<endl<<endl;
        }

    private:
        string CNPJ;
        string inscricao_estadual;
        string razao_social;

};