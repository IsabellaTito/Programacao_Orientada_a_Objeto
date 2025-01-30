#include "Agenda.h"

ostream &operator<<(ostream &out, const Agenda &A){
    out<<"Contatos da Agenda:"<<endl<<endl;
    for(const auto &c:A.agenda){
        out<<c->imprimir_contato()<<endl<<endl;
    }
    return out;
}

Agenda& Agenda::operator<<(const PessoaFisica &pf){
    agenda.push_back(new PessoaFisica(pf)); // new Contato(cont) retorna um ponteiro para o espaço alocado. Como agenda é um vector de ponteiros, podemos dar o push_back.
    return *this; //This é um ponteiro para o objeto Agenda (classe). Ai desreferenciando temos o objeto em si sendo retornado (alias).
} //this usado para ser usado chamadas em cascata

Agenda& Agenda::operator<<(const PessoaJuridica &pj){
    agenda.push_back(new PessoaJuridica(pj)); 
    return *this;
}      

Agenda& Agenda::operator>>(string nome){
    for(int i=0; i<agenda.size();i++){
        if(agenda[i]->getNome()==nome){
            agenda.erase(agenda.begin()+i);
            return *this;
        }
    }
    return *this;
}

Contato* Agenda::pesquisa(string nome){
    for(const auto c: agenda){
        if(c->getNome() == nome){
            cout << "O contato de "<<nome<<" existe na agenda!" <<endl;
            return c;
        }
    }
    cout<<"O contato de "<<nome<<" nao existe na agenda!"<<endl;
    return nullptr;
}

