#include <iostream>
#include "Cupom.hpp"

using std::cout, std::endl;

int main(){

    Cupom c1{"123", "Cabo micro USB 3m", 5, 10.50}, c2{"456", "Mouse sem fio", 10, 65.14};

    cout << "Cupom do Item de ID: " << c1.getID() << endl
         << "Descricao: " << c1.getDESC() << endl
         << "Quantidade: " << c1.getQuant() << endl
         << "Valor por item: " << c1.getPreco() <<endl
         << "VALOR TOTAL DA NOTA: " << c1.calculaCupom() << endl <<endl;

    cout << "Cupom do Item de ID: " << c2.getID() << endl
         << "Descricao: " << c2.getDESC() << endl
         << "Quantidade: " << c2.getQuant() << endl
         << "Valor por item: " << c2.getPreco() <<endl
         << "VALOR TOTAL DA NOTA: " << c2.calculaCupom() << endl <<endl;
    
    c1.setID("963");
    c1.setDESC("Pen drive 64GB");
    c1.setQuant(45);
    c1.setPreco(-34.99);

    c2.setID("789");
    c2.setDESC("Teclado gammer sem fio");
    c2.setQuant(-3);
    c2.setPreco(139.9);

    cout << "Cupom do Item de ID: " << c1.getID() << endl
         << "Descricao: " << c1.getDESC() << endl
         << "Quantidade: " << c1.getQuant() << endl
         << "Valor por item: " << c1.getPreco() <<endl
         << "VALOR TOTAL DA NOTA: " << c1.calculaCupom() << endl <<endl;

    cout << "Cupom do Item de ID: " << c2.getID() << endl
         << "Descricao: " << c2.getDESC() << endl
         << "Quantidade: " << c2.getQuant() << endl
         << "Valor por item: " << c2.getPreco() <<endl
         << "VALOR TOTAL DA NOTA: " << c2.calculaCupom() << endl <<endl;

    return 0;
}