#include "Bruxo.h"

Bruxo::Bruxo(string nome, string casa, string feitico){
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico);
}

string Bruxo::getNome() const{
    return hp_nome;
}

void Bruxo::setNome(string nome){
    hp_nome = nome;
}

string Bruxo::getCasa() const{
    return hp_casa;
}

void Bruxo::setCasa(string casa){
    if(casa.compare("Grifinoria")!=0 && casa.compare("Sonserina")!=0 && casa.compare("Lufa-lufa")!=0 && casa.compare("Corvinal")!=0){
        casa = " ";
    }
    hp_casa = casa;
}

string Bruxo::getFeitico() const{
    return hp_feitico;
}

void Bruxo::setFeitico(string feitico){
    hp_feitico = feitico;
}

void Bruxo::lancarFeitico() const{
    std::cout<<"Lancando feitico " << getFeitico() << std::endl;
}

void Bruxo::display() const{
    std::cout << getNome() << " " << getCasa() << " " << getFeitico() << std::endl;
}