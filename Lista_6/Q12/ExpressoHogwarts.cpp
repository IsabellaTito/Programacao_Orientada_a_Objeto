#include "ExpressoHogwarts.h"

ostream &operator<<(ostream &out, const ExpressoHogwarts &EH){
    out<<"----------------------------------------------------------"<<endl<<endl;
    
    out<<"PASSAGEIROS DO EXPRESSO HOGWARTS"<<endl;
    out<<"Ocupação: "<<EH.passageiros.size()<<"/"<<EH.tam<<endl<<endl;
    for(int i=0; i<EH.passageiros.size();i++){
        out<<"Nome: "<<EH.passageiros[i]->getNome()<<endl;
    }
    out<<"----------------------------------------------------------"<<endl<<endl;
    return out;
}

ExpressoHogwarts::ExpressoHogwarts(int tam){
    this->tam = (tam>0? tam:100);
}

ExpressoHogwarts::~ExpressoHogwarts(){
     for(int i=0; i<passageiros.size();i++){
        delete passageiros[i];
        passageiros.erase(passageiros.begin()+i);
     }
}

//EMBARQUE DE HUMANOS
ExpressoHogwarts& ExpressoHogwarts::operator<<(const Bruxo &b){
    if(passageiros.size()<tam){
        passageiros.push_back(new Bruxo(b));
    }
    else{
        cout<<"Expresso de Hogwarts está cheio. Pegue o carro voador!"<<endl;
    }
    return *this;
}

ExpressoHogwarts& ExpressoHogwarts::operator<<(const Trouxa &t){
    if(passageiros.size()<tam){
        passageiros.push_back(new Trouxa(t));
    }
    else{
        cout<<"Expresso de Hogwarts está cheio. Pegue o carro voador!"<<endl;
    }
    return *this;
}

ExpressoHogwarts& ExpressoHogwarts::operator<<(const Humano &h){
    if(passageiros.size()<tam){
        passageiros.push_back(new Humano(h));
    }
    else{
        cout<<"Expresso de Hogwarts está cheio. Pegue o carro voador!"<<endl;
    }
    return *this;
}

//DESEMBARQUE DE HUMANOS
ExpressoHogwarts& ExpressoHogwarts::operator>>(const Humano &h){
    for(int i=0; i<passageiros.size();i++){
        if(passageiros[i]->getNome()==h.getNome()){
                    delete passageiros[i];
                    passageiros.erase(passageiros.begin()+i);
        }
    }
    return *this;
}

ExpressoHogwarts& ExpressoHogwarts::operator>>(const string nome){
    for(int i=0; i<passageiros.size();i++){
        if(passageiros[i]->getNome()== nome){
            delete passageiros[i];
            passageiros.erase(passageiros.begin()+i);
        }
    }
    return *this;
}

Humano* ExpressoHogwarts::operator[](int num){
    if(num<tam){
        return this->passageiros[num];
    }
    cout<<"Numero do acento superior a capacidade do vagao!"<<endl;
    return nullptr;
}