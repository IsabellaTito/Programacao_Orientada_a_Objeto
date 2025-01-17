#include "CapaBruxo.h"

    void CapaBruxo::setCasa(string casa){
        if(casa == "Grifinoria"){
            this->casa = casa;
            this->cor = "Vermelho";
        }
        else if (casa == "Sonserina"){
            this->casa = casa;
            this->cor = "Verde";
        }
        else if(casa == "Corvinal"){
            this->casa = casa;
            this->cor = "Azul";
        }
        else if(casa == "Lufa-Lufa"){
            this->casa = casa;
            this->cor = "Amarelo";
        }
        else{
            this->casa ="Casa Inexistente";
            this->cor = "Branca";
        }
    }

    void CapaBruxo::display(){
        cout << "A capa tem tamanho "<< tamanho << " e cor " << cor << " que representa os bruxos da casa " << casa << endl <<endl;
    }