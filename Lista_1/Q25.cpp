#include <iostream>

int main(){

    double cons{0},lit{0},km{0}, consL{0};

    std::cout << "Informe quantos km: ";
    std::cin >> km;

    while(km != -1){
        std::cout << "Informe quantos litros para encher o tanque: ";
        std::cin >> lit;

        cons = km/lit;
        consL += lit;

        std::cout << "Consumo de " << cons << " km/L" << std::endl;
        std::cout << "Total de " << consL << " litros consumidos."<< std::endl;

        std::cout << "Informe quantos km: ";
        std::cin >> km;
    };

    return 0;
}