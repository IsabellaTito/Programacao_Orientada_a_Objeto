#include "Complex.h"

ostream &operator<<(ostream &out, const Complex &c){
    if(c.parte_imaginaria>0){
        out<<c.parte_real << " + " <<c.parte_imaginaria<<"i"<<endl<<endl;
    }
    else{
        out<<c.parte_real << " - " <<abs(c.parte_imaginaria)<<"i"<<endl<<endl;
    }
    return out;    
}

Complex::Complex(double pr,double pi):parte_real{pr},parte_imaginaria{pi}{}

//SOMA e retorna um terceiro complexo como resultado
Complex Complex::operator+(Complex &c){
    Complex cr;
    cr.parte_real = this->parte_real + c.parte_real;
    cr.parte_imaginaria = this->parte_imaginaria + c.parte_imaginaria;
    return cr;
}

//SOMA e retorna o invocador
Complex& Complex::operator+=(Complex &c){
    this->parte_real = this->parte_real + c.parte_real;
    this->parte_imaginaria = this->parte_imaginaria + c.parte_imaginaria;
    return *this;
}

//SUBTRAI e retorna um terceiro complexo como resultado
Complex Complex::operator-(Complex &c){
    Complex cr;
    cr.parte_real = this->parte_real - c.parte_real;
    cr.parte_imaginaria = this->parte_imaginaria - c.parte_imaginaria;
    return cr;
}

//SUBTRAI e retorna o invocador
Complex& Complex::operator-=(Complex &c){
    this->parte_real = this->parte_real - c.parte_real;
    this->parte_imaginaria = this->parte_imaginaria - c.parte_imaginaria;
    return *this;
}

//INCREMENTA 
Complex& Complex::operator++(){
    this->parte_real = this->parte_real+1;
    return *this;
}

//DECREMENTA
Complex& Complex::operator--(){
    this->parte_real = this->parte_real-1;
    return *this;
}