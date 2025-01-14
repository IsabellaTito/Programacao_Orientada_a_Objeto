#include "P_Revisitada.h"

Pessoa::Pessoa(string nome, string CPF){
    setNome(nome);
    setCPF(CPF);
}

string Pessoa::getNome() const{
    return p_nome;
}

void Pessoa::setNome(string nome){
    p_nome = nome;
}

string Pessoa::getCPF() const{
    return p_CPF;
}

void Pessoa::setCPF(string CPF){
    p_CPF = CPF;    
    
    int sum{0},mult{10},d1{0},d2{0},igual{0};
    char comp;

    for(int i=0; i<9;i++){
        sum+=(p_CPF[i]-'0')*mult;
        mult--;

        if(i==0){
            comp=p_CPF[i];
        }
        else{
            if(comp == p_CPF[i]){
                igual++;
            }
            comp = p_CPF[i];
        }
    }

    if(igual >= 8){
        p_CPFV = false;
    }
    else{
        d1 = ((sum*10)%11 == 10)? 0 : (sum*10)%11;
        
        if(d1 == (p_CPF[9]-'0')){
            mult = 11;
            sum = 0;
            for(int i=0; i<10;i++){
                sum+=(p_CPF[i]-'0')*mult;
                mult--;
            }
            
            d2 = ((sum*10)%11 == 10)? 0 : (sum*10)%11;

            if(d2 == (p_CPF[10]-'0')){
                p_CPFV = true;
            }
            else{
                p_CPFV = false;
            }
        }
        else{
            p_CPFV = false;
        }

    }

    
}


void Pessoa::apresentar(){
    cout<<"Nome: "<< p_nome<<endl;
    cout<<"CPF: ";

    for(int i=0; i<11; i++){
        if(i==2||i==5)
            cout << p_CPF[i]<<".";
        else if(i==8)
            cout <<p_CPF[i]<<"-";
        else
            cout<<p_CPF[i];
    }
    
    if(p_CPFV)
        cout<<" (Valido)"<<endl<<endl;
    else
        cout<<" (Invalido)"<<endl<<endl;

} 