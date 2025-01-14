#pragma once

#include <iostream>

using std::cout, std::endl;

class ViraTempo{

public:

    ViraTempo(int);

    void mostrarTempo();

    void avancarTempo();

    void virarTempo();

private:
    
    int N;
    int tempo;
    bool vira;

};