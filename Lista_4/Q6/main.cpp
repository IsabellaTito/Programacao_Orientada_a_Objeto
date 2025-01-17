#include "Varinha.h"

int main(){

    Varinha v1{"Pau-Brasil","Ditamno",25.5}, v2{"Sabugueiro","Pelo de Unicornio",30.0}, v3;

    v1.display();

    v2.display();

    v3.display();

    v3.setMadeira("Videira");
    v3.setNucleo("Coral");
    v3.setComp(23.7);

    v3.display();

    return 0;
}

