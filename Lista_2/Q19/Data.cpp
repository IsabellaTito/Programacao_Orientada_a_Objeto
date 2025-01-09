#include "Data.hpp"


Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);
}

int Data::getDia() const{
   return d_dia; 
}

void Data::setDia(int d){
    d_dia = d;
}

int Data::getMes() const{
    return d_mes;
}

void Data::setMes(int m){
    if(m>=1 && m<=12){
        d_mes = m;
    }
    else{
        d_mes =  1;
    }
}

int Data::getAno() const{
    return d_ano;
}

void Data::setAno(int a){
    d_ano = a;
}

string Data::toString() const{
    return format("{0}/{1}/{2}",d_dia,d_mes,d_ano); 
}