#include "Retangulo.h"

Retangulo::Retangulo(int alt, int larg){
    set_altura(alt);
    set_largura(larg);
}

int Retangulo::get_altura() const{
    return altura;
}

void Retangulo::set_altura(int alt){
    (alt > 0.0 && alt < 20.0)? altura=alt : altura = 1.0;
}

int Retangulo::get_largura() const{
    return largura;
}

void Retangulo::set_largura(int larg){
    (larg > 0.0 && larg < 20.0)? largura=larg : largura = 1.0;
}

int Retangulo::perimetro(){
    return largura*2+altura*2;
}

int Retangulo::area(){
    return largura*altura;
}

void Retangulo::desenha(){

    for(int i=0; i<altura+2; i++){
        for(int j=0; j<largura+2; j++){
            if((i==0 && j==0)||(i==0 && j==largura+1)||(i==altura+1 && j==0)||(i==altura+1 && j==largura+1))
                cout<<"+";
            else if(i==0||i==altura+1)
                cout <<"-";
            else if(j==0 || j==largura+1)
                cout<<"|";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}