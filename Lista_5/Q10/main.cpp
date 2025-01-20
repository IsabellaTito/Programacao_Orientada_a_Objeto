#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"
#include <iostream>

using std::cout, std::endl;

int main(){

    Imovel I{"Monte Castelo", 240000};
    ImovelNovo IN{"Mirante", 500000, 5};
    ImovelVelho IV{"Pedregal",130000, 10};

    cout << "Imovel: " << I.getPreco() << endl;
    cout << "Imovel Novo: " << IN.getPreco() << endl;
    cout << "Imovel Velho: " << IV.getPreco() <<endl;

    
    return 0;
}