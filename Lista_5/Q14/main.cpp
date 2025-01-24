#include <iostream>
#include "Empresa.h"
#include "Cliente.h"
#include "Funcionario.h"
#include <vector>
#include <string>

using std::vector, std::string, std::cout, std::endl;

int main(){

    Funcionario f1{"Scooby-doo","123.445.876-23","234",3000,20,15}, f2{"Velma", "234.567.890-12","123",5000,40,40}, f3{"Fred","345.678.901-23","345",1987,15,10};
    Cliente c1{"Velma","321.654.987-08","Ilha do misterio",978543216}, c2{"Daphne","567.890.123-45","Maquina de misterios",965784123};
    Empresa E1{"Plantas Verde","78.945.612/0001-30","Centro Plantacoes ltda"};

    E1.addCliente(c1);
    E1.addCliente(c2);
    E1.addFuncionario(f1);
    E1.addFuncionario(f2);
    E1.addFuncionario(f3);

    cout << E1 << endl;


    return 0;
}

