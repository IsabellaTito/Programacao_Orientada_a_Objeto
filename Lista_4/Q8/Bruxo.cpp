#include "Bruxo.h"


Bruxo::Bruxo(string nome, string casa, string feitico):varinhaBruxo{nullptr},capaBruxo{nullptr}{
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
    
    if(capaBruxo){
        capaBruxo->display();
    }
    else{
        std::cout << "O bruxo esta sem capa"<<std::endl;
    }

    if(varinhaBruxo){
        varinhaBruxo->display();
    }
    else{
        std::cout << "O bruxo esta sem varinha"<<std::endl;
    }
    std::cout << std::endl;
}
