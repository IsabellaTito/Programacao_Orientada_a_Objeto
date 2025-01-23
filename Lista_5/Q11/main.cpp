#include <iostream>
#include <string>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using std::string, std::cout, std::endl;

int main(){

    PessoaFisica pf{"Marcia","123.456.789-10"};
    PessoaJuridica pj{"Plantas Verde","78.945.612/0001-30","Centro Plantacoes ltda"};

    cout<< pf <<endl;
    cout<< pj <<endl;


    return 0;
}