#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Contato.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using std::cout, std::endl, std::vector, std::string, std::ostream;

class Agenda{
    friend ostream &operator<<(ostream &, const Agenda &);

    public:
        Agenda():agenda{}{}

        //Adicionar contatos
        Agenda &operator<<(const PessoaFisica &pf);
        Agenda &operator<<(const PessoaJuridica &pj); //Retorno em referência para poder encadear os métodos. Ex: cout<<"oi"<<endl -> cout<<"oi" retorna um cout que fica cout<<endl; 
        
        //Remover contatos
        Agenda &operator>>(string nome);

        //Procurar contatos
        Contato* pesquisa(string nome);

    private:
        vector<Contato*>agenda;

};