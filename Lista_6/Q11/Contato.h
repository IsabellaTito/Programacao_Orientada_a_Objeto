#pragma once

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Contato{
    public:
        Contato(string n, string end,string email):nome{n},endereco{end},email{email}{}
    
        void setNome(string n){nome=n;}
        void setEndereco(string end){endereco=end;}
        void setEmail(string email){this->email=email;}
   
        string getNome()const{return nome;}
        string getEndereco()const{return endereco;}
        string getEmail()const{return email;}

        virtual string imprimir_contato()const{
            return "Nome: " + nome + "\nEndereco: " + endereco + "\nEmail: " + email;
        }


    protected:
       string nome;
       string endereco;
       string email; 
};