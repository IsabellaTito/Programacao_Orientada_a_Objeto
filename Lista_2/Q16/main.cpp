#include <iostream>
#include <string>

#include "Empregado.hpp"

using std::string, std::cout, std::endl;

int main(){

    Empregado clt1{"Isabella", "Tito",15000}, clt2{"Matheus", "Nascimento",20000};

    cout << "Salario mensal de " << clt1.getNome() <<" "<< clt1.getSobrenome() 
         << " eh de " << clt1.getSalario() << " reais" << endl;

    cout << "Salario mensal de " << clt2.getNome() <<" "<< clt2.getSobrenome() 
         << " eh de " << clt2.getSalario() << " reais" << endl;

    double aum1 = clt1.getSalario()*1.1, aum2 = clt2.getSalario()*1.1;

    clt1.setSalario(aum1);
    clt2.setSalario(aum2);

    cout << endl;

    cout << "Salario mensal de " << clt1.getNome() <<" "<< clt1.getSobrenome() 
         << " eh de " << clt1.getSalario() << " reais" << endl;

    cout << "Salario mensal de " << clt2.getNome() <<" "<< clt2.getSobrenome() 
         << " eh de " << clt2.getSalario() << " reais" << endl;

    return 0;
}