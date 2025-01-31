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

    Livro *livro{nullptr};
    LivroMonstruosoDosMonstros *lm{nullptr};
    LivroInvisivelDaInvisibilidade *li{nullptr};

    //Ponteiro livro apontando para livro
    cout << "Livro: " <<endl<<endl;
    livro = &L1;
    livro->ler();

    //Ponteiro Livro Monstruoso apontando para Livro Monstruoso
    cout << "Livro Monstruoso: "<<endl<<endl;
    lm = &LM1;
    lm->ler();

    //Ponteiro Livro Invisivel apontando para Livro Invisivel
    cout<<"Livro Invisivel: "<<endl<<endl;
    li=&LI1;
    li->ler();

    cout <<"------------------------------"<<endl<<endl;
    cout<<"Ponteiro Livro recebe Livro Monstruoso: "<<endl<<endl;
    livro = &LM1;
    livro->ler();

    cout <<"------------------------------"<<endl<<endl;
    cout<<"Ponteiro Livro recebe Livro Invisivel: "<<endl<<endl;
    livro = &LI1;
    livro->ler();
    
    return 0;
}