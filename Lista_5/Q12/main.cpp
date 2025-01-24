#include "Cliente.h"
#include "PessoaFisica.h"
#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

int main(){

    PessoaFisica pf{"Dafine","123.456.789-10"};
    Cliente c{"Velma","321.654.987-08","Ilha do mistério",978543216};

    cout<< pf <<endl;

    cout<< c <<endl;


    return 0;
}