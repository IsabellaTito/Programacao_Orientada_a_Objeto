#include <iostream>
#include "Retangulo.h"
#include <format>

using std::cout, std::endl, std::format;

int main(){

    Retangulo r1{}, r2{5,3}, r3{5,10};

    cout<< "-------- Retangulo 1 --------" << endl<<endl;
    cout<< format("Altura: {}  Largura: {}",r1.get_altura(),r1.get_largura())<<endl;
    cout<< format("Perimetro: {}\nArea: {}",r1.perimetro(),r1.area()) <<endl<<endl;
    r1.desenha();

    cout<< "-------- Retangulo 2 --------" << endl<<endl;
    cout<< format("Altura: {}  Largura: {}",r2.get_altura(),r2.get_largura())<<endl;
    cout<< format("Perimetro: {}\nArea: {}",r2.perimetro(),r2.area()) <<endl<<endl;
    r2.desenha();

    cout<< "-------- Retangulo 3 --------" << endl<<endl;
    cout<< format("Altura: {}  Largura: {}",r3.get_altura(),r3.get_largura())<<endl;
    cout<< format("Perimetro: {}\nArea: {}",r3.perimetro(),r3.area()) <<endl<<endl;
    r3.desenha();

    cout<<"Alterando valores de Retangulo 1:"<<endl;

    r1.set_altura(6);
    r1.set_largura(8);

    cout<< "-------- Retangulo 1 --------" << endl<<endl;
    cout<< format("Altura: {}  Largura: {}",r1.get_altura(),r1.get_largura())<<endl;
    cout<< format("Perimetro: {}\nArea: {}",r1.perimetro(),r1.area()) <<endl<<endl;
    r1.desenha();


    return 0;
}