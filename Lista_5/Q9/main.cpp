#include <iostream>
#include <string>
#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"

int main(){

    Humano H1{"Cleiton", 22};
    Bruxo B1{"Draco", 16, "Sonserina", "Alohomora"};
    Trouxa T1{"Marcia", 35, "Contadora"};

    H1.jogar();
    H1.vassoura();

    B1.jogar();
    B1.vassoura();

    T1.jogar();
    T1.vassoura();

    return 0;
}