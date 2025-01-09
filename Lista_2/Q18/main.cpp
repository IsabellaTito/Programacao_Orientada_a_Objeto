#include <iostream>
#include "ContaBanco.hpp"

using std::cout, std::endl;

int main(){

    ContaBanco c1{20000}, c2{12.30}, c3{50.96};

    cout << "Saldos:" <<endl
         << "Conta 1: " << c1.getSaldo() << endl
         << "Conta 2: " << c2.getSaldo() << endl
         << "Conta 3: " << c3.getSaldo() << endl <<endl;

    c1.debitar(476.83);
    
    cout << "Saldos depois de debitar 476,83 reais em conta 1:" <<endl
         << "Conta 1: " << c1.getSaldo() <<endl
         << "Conta 2: " << c2.getSaldo() << endl
         << "Conta 3: " << c3.getSaldo() << endl <<endl;
    
    c2.creditar(-700.00);

    cout << "Saldos depois de creditar 700 reais em conta 2:" <<endl
         << "Conta 1: " << c1.getSaldo() <<endl
         << "Conta 2: " << c2.getSaldo() << endl
         << "Conta 3: " << c3.getSaldo() << endl <<endl;
    
    c3.debitar(352.48);

    cout << "Saldos depois de debitar 352,48 reais em conta 3:" <<endl
         << "Conta 1: " << c1.getSaldo() <<endl
         << "Conta 2: " << c2.getSaldo() << endl
         << "Conta 3: " << c3.getSaldo() << endl <<endl;
    return 0;
}