#include "ExpressoHogwarts.h"

ostream &operator<<(ostream &out, const ExpressoHogwarts &EH){
    out<<"----------------------------------------------------------"<<endl<<endl;
    
    out<<"PASSAGEIROS DO EXPRESSO HOGWARTS"<<endl;
    out<<"Ocupação: "<<EH.passageiros.size()<<"/"<<EH.tam<<endl<<endl;
    for(int i=0; i<EH.passageiros.size();i++){
        out<<"Bruxo: "<<EH.passageiros[i].getNome()<<endl;
        out<<"Casa: "<<EH.passageiros[i].getCasa()<<endl;
        out<<"Feitico: "<<EH.passageiros[i].getFeitico()<<endl<<endl;
    }
    out<<"----------------------------------------------------------"<<endl<<endl;
    return out;
}

ExpressoHogwarts::ExpressoHogwarts(int tam){
    this->tam = (tam>0? tam:20);
}

//EMBARQUE DE BRUXOS
ExpressoHogwarts& ExpressoHogwarts::operator<<(Bruxo b){
    if(passageiros.size()<tam){
        passageiros.push_back(b);
    }
    else{
        cout<<"Expresso de Hogwarts está cheio. Pegue o carro voador!"<<endl;
    }
    return *this;
}

//DESEMBARQUE DE BRUXOS
ExpressoHogwarts& ExpressoHogwarts::operator>>(Bruxo b){
    for(int i=0; i<passageiros.size();i++){
        if(passageiros[i].getNome()==b.getNome()){
            if(passageiros[i].getCasa() == b.getCasa()){
                if(passageiros[i].getFeitico() == b.getFeitico()){
                    passageiros.erase(passageiros.begin()+i);
                }
            } 
        }
    }
    return *this;
}

ExpressoHogwarts& ExpressoHogwarts::operator>>(const string nome){
    for(int i=0; i<passageiros.size();i++){
        if(passageiros[i].getNome()== nome){
            passageiros.erase(passageiros.begin()+i);
        }
    }
    return *this;
}