#include <iostream>
#include <string>
#include "Agenda.h"
#include "Contato.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using std::cout, std::endl, std::string;

int main(){

    PessoaFisica pf{"Velma","Ilha do Mistério","velma@gmail.com","123.456.789-10","12/03","Solteira"},pf2{"Fred","Ilha do misterio","fred@gmail.com","345.678.129-08","19/02","Casado"};
    PessoaJuridica pj{"Plantas Verde","Centro","Plantas@gmail.com","78.945.612/0001-30","1234","Centro Plantacoes ltda"}, pj2{"Maquina de Misterios","Terra do NUnca","detetives@gmail.com","58.456.098/0001-14","3456","Scooby-Doo ltda"};
    Agenda caderno;

    caderno<<pf<<pf2;
    
    caderno<<pj;

    cout<<caderno;

    cout<<"---------------------------"<<endl;

    caderno.pesquisa("Fred");

    caderno.pesquisa("Maquina de Misterios");

    caderno<<pj2;

    caderno>>pf.getNome();

    caderno.pesquisa("Maquina de Misterios");

    cout<<"---------------------------"<<endl;

    cout<<caderno;

    
    return 0;
}