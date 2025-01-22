#include <iostream>
#include <string>
#include "Livro.h"
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"

using std::cout, std::endl, std::string;

int main(){

    Livro L1{"Harry Potter e o Enigma do Principe", 2005, 472,"Ficcao e Fantasia"};
    LivroMonstruosoDosMonstros LM1{"Harry Potter e as Reliquia da Morte", 2007, 592, "Fantasia e Ficcao"};
    LivroInvisivelDaInvisibilidade LI1{"Harry Potter e a Camara Secreta",1998,224, "Ficcao e Fantasia" };

    cout<<"Leitura do Livro: "<<endl;
    L1.ler();

    cout<<"Leitura do Livro Monstruoso Dos Monstros: "<<endl;
    LM1.ler();

    cout<<"Leitura do Livro Invisivel Da Invisibilidade: "<<endl;
    LI1.ler();

    return 0;
}
