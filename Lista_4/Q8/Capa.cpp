#include "Capa.h"

    void Capa::setCasa(string casa){
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

    void Capa::display(){
        cout << "O Bruxo esta usando uma capa de tamanho "<< tamanho << " e cor " << cor << " que representa os bruxos da casa " << casa <<endl;
    }