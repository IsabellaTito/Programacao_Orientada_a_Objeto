#include "ViraTempo.h"

ViraTempo::ViraTempo(int n){
    N = n;
    tempo = 0;
    vira = false; // false - incrementando / true - decrementa
}

void ViraTempo::mostrarTempo(){
    cout << tempo << endl;
}

void ViraTempo::avancarTempo(){
    if(vira){
        tempo = (tempo-- <= 0)? 0 : tempo--;
    }
    else{
        tempo = (tempo++ >= N)? N : tempo++;
    }
}

void ViraTempo::virarTempo(){
    if(vira){
        vira = false;
    }
    else{
        vira = true;
    }
}