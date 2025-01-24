#include <iostream>
#include <string>

#include "Funcionario.h"
#include "PessoaFisica.h"

using std::cout, std::endl, std::string;

int main(){

    PessoaFisica pf{"Fred","432.876.567-98"};
    Funcionario f{"Scooby-doo","123.445.876-23","21250055.2",3000,20,15};

    cout << pf << endl;
    cout << f << endl;

    return 0;
}