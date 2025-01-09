#include <iostream>
#include "Data.hpp"

using std::cout, std::endl;

int main(){

    Data d1{19,02,1998}, d2{15,06,2000}, d3{21,12,2006};

    cout << format(" Dia {} Mes {} e Ano {}", d1.getDia(), d1.getMes(), d1.getAno())<< endl;
    cout << format(" Dia {} Mes {} e Ano {}", d2.getDia(), d2.getMes(), d2.getAno())<< endl;
    cout << format(" Dia {} Mes {} e Ano {}", d3.getDia(), d3.getMes(), d3.getAno())<< endl;

    d2.setAno(2024);
    d2.setDia(17);
    d2.setMes(45);

    cout << d2.toString();

    return 0;
}