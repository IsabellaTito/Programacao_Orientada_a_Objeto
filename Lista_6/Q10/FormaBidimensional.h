#ifndef FORMABI_H
#define FORMABI_H 

//classe abstrata

class FormaBidimensional 
{
public:
  FormaBidimensional(int numLados) : numLados(numLados) { }

  //método virtual puro
  virtual void desenhar() = 0;

  virtual void calcularArea() = 0;

  virtual void calcularPerimetro() = 0;

private:
  int numLados;
};

#endif