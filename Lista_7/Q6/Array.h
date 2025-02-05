#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream, std::istream;

class Array
{
  // cout << obj << cout
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);

public:
  Array( int = 10 );    //construtor-padrão
  Array(const Array &); //construtor de cópia
  ~Array();             //destrutor

  int getSize() const;
  
  const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

  bool operator==( const Array & ) const; //operador de igualdade

  bool operator!=( const Array &dir) const
  {
    return !(*this == dir);
  }

  //Concatenação de Array
  Array operator+(const Array &);

  //Concatenar o segundo array com o primeiro
  Array &operator+=(const Array&);

  int &operator[](int); //permite modificar o elemento
  int operator[](int) const; //não permite modificar o elemento

private:
  int tam;
  int *arr;
};

#endif