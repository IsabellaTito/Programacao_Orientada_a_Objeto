#include <iostream>
#include <string>
//#include <format>

int main(){
    double n1{0},n2{0},n3{0},media{0};
    std::string nome{};

    std::cout << "Digite o primeiro nome: ";
    std::cin >> nome;
    std::cout << "Digite as tres notas: ";
    std::cin >> n1 >> n2 >> n3;

    media = (n1*3+n2*4+n3*5)/12;

    std:: cout << "O aluno " << nome << " obteve media " << media;

    //---------PARA USAR O FORMAT PRECISO ATUALIZAR O g++------------
    //std::cout << std::format("O aluno {0} obteve media {1:.2f}", nome, media) << std::endl;
    //Esses números dentro do {} indicam qual o valor que vai substituir.
    //Note que depois de aluno temos {0} que indica que será substituido por nome que estaria na posição 0
    //Em seguida temos o decimal que será mostrado apenas duas casas. Como o valor estaria na segunda posição
    //indexado pelo 1, indicamod {1:.2f}
    return 0;
}