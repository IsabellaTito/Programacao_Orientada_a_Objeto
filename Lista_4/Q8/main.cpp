#include "Bruxo.h"
#include "Capa.h"
#include "Varinha.h"
#include <iostream>

int main(){

    Bruxo B1{"Rony", "Grifinoria", "Wingardium Leviosa"}, B2{"Cedrico", "Lufa-lufa", "Cabeca de Bolha"}, B3{"Luna", "Corvinal","Expecto Patronum"};
    Bruxo B4{"Draco","Sonserina","Proteu"}, B5{"Isabella", "IFPB", "Lumus"}, B6{"Matthew","IFPB","Alohomora"};

    Capa c1{1.45,"Grifinoria"}, c2{2.0,"Sonserina"}, c3{1.3,"Corvinal"}, c4{2.1,"Lufa-Lufa"},c5{};

    Varinha v1{"Pau-Brasil","Ditamno",25.5}, v2{"Sabugueiro","Pelo de Unicornio",30.0}, v3{"Videira","Coral",23.7};

    std::cout << "-------------- Bruxo 1 ---------------"<<std::endl<<std::endl;
    B1.display();
    B1.colocaCapa(&c1);
    B1.display();
    B1.pegaVarinha(&v1);
    B1.display();
    B1.tiraCapa();
    B1.soltaVarinha();
    B1.display();


    return 0;
}


