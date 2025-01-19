#include "ChapeuSeletor.h"


void ChapeuSeletor::Recepcionar(){
    cout<<"Nao ha nada escondido em sua cabeca que o Chapeu Seletor"
        <<"nao consiga ver, por isso e so me porem na cabeca que vou"
        <<" dizer em que casa de Hogwarts deverao ficar"<<endl;
}

string ChapeuSeletor::sortearCasa(){
    int sorte = rand()%4;
    if(sorte == 0){
        return "Grifinoria";
    }
    else if(sorte == 1){
        return "Lufa-Lufa";
    }
    else if(sorte == 2){
        return "Sonserina";
    }
    else{
        return "Corvinal";
    }
}