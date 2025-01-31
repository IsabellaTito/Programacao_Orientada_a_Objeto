#include "ExpressoHogwarts.h"
#include "Bruxo.h"
#include "Trouxa.h"
#include "Humano.h"

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

int main(){

    Humano H1{"Cleiton", 22};
    Bruxo B1{"Draco", 16, "Sonserina", "Alohomora"},B2{"Rony",15, "Grifinoria", "Wingardium Leviosa"}, B3{"Cedrico",17, "Lufa-lufa", "Cabeca de Bolha"}, B4{"Luna",16, "Corvinal","Expecto Patronum"};
    Trouxa T1{"Marcia", 35, "Contadora"},T2{"Igor",14,"Estudante"},T3{"Ana",16,"Estudante"};
    ExpressoHogwarts trem{100};

    trem<<B1<<H1<<B2<<T1<<B3<<B4<<T2<<T3;

    cout<<trem;

    trem[0]->quemSou();
    trem[1]->quemSou();
    trem[4]->quemSou();
    trem[3]->quemSou();

    cout<<"Desembarcando trouxa..."<<endl;
    trem>>T1;

    trem[7]->quemSou();
    cout<<"Desembarcando trouxa..."<<endl;
    trem>>T3;

    trem[2]->quemSou();
    trem[5]->quemSou();
    trem[6]->quemSou();
    cout<<"Desembarcando trouxa..."<<endl;
    trem>>T2;

    cout<<trem;


    return 0;
}