#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo(int base, int altura) : FormaBidimensional(3), base{base}, altura{altura} {}

  virtual void desenhar() {
    cout << "   .    " << endl;
    cout << "  / \\  " << endl;
    cout << " /   \\ " << endl;
    cout << "/_____\\" << endl;
  }

  virtual void calcularArea(){
    cout << "Area do Triangulo: " << base*altura <<endl;
  }

  virtual void calcularPerimetro(){
    cout<< "Perimetro do Triangulo: "<< base*3 <<endl;
  }

private:
    int base;
    int altura;
};

#endif