#include <iostream>
using std::cerr, std::endl;

#include "Array.h"

// cout << obj << cout
ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

// cin >> obj
istream &operator>>(istream &inp , Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

//construtor-padrão
Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

//construtor de cópia
Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

//destrutor
Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

//operador atribuição. "const Array &" evita algo como (a = b) = c
const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

//operador de igualdade
bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

//Concatenação de Array
  Array Array::operator+(const Array &A2){
    Array c{tam+A2.tam};

    for (int i=0; i<tam; i++){
        c[i] = this->arr[i];
    }
    for (int i=tam;i<tam+A2.tam;i++){
        c[i] = A2.arr[i-tam];
    }
    return c;
  }

//Concatenar o segundo array com o primeiro
  Array& Array::operator+=(const Array &A2){
    *this = *this+A2;
    return *this;
  }



//permite modificar o elemento
int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

//não permite modificar o elemento
int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}