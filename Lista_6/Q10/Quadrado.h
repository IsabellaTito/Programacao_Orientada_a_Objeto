#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado(int lado) : FormaBidimensional(4), lado{lado} {}

  virtual void desenhar() {
    cout << "+---+" << endl;
    cout << "|   |" << endl;
    cout << "+---+" << endl;
  }

  virtual void calcularArea(){
    cout << "Area do Quadrado: " << lado*lado<<endl;
  }

  virtual void calcularPerimetro(){
    cout << "Perimetro do Quadrado: " << 4*lado<<endl;
  }

private: 
    int lado;
};

#endif