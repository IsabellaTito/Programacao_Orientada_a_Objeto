#include "Bruxo.h"


Bruxo::Bruxo(string nome, int idade, string casa, string feitico): Humano(nome,idade){
    setCasa(casa);
    setFeitico(feitico);
}

string Bruxo::getCasa() const{
    return hp_casa;
}

void Bruxo::setCasa(string casa){
    if(casa.compare("Grifinoria")!=0 && casa.compare("Sonserina")!=0 && casa.compare("Lufa-Lufa")!=0 && casa.compare("Corvinal")!=0){
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
    std::cout <<"O feitico preferido do bruxo "<< getNome() << " da " << getCasa() << " eh " << getFeitico() << std::endl;
}
