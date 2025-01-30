#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
  Circulo(int raio) : FormaBidimensional(99999), raio{raio} {}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  - " << endl;
  }

  virtual void calcularArea(){
    cout << "Area do Circulo: "<< raio*raio*3.14 <<endl;
  }

  virtual void calcularPerimetro(){
    cout << "Perimetro do Circulo: " << 2*3.14*raio <<endl;
  }

private:
    int raio;
};

#endif