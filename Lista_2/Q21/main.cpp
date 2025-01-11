#include <iostream>
#include <string>
#include "Cupom2.hpp"

int main(){
    Cupom2 compras;

    compras.addItem("123","Cabo micro USB 3m", 5, 10.50);
    compras.addItem("456","Mouse sem fio", 10, 65.14);
    compras.addItem("789","Teclado gamer", 3, 119.90);
    compras.addItem("741", "PenDrive", 25, 38.23);
   

    cout << "Procurando item ID: 456 " << endl <<  compras.getItem("456") <<endl;
   
    cout << "Procurando item ID: 258 " << endl << compras.getItem("258") <<endl<<endl;

    cout << "Calcula Cupom " << compras.calculaCupom() <<endl<<endl;

    compras.imprimirnota();

    return 0;   
}