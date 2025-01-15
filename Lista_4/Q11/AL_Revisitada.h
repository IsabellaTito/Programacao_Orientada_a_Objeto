#pragma once

#include <vector>

using std::vector;

class ArrayList
{
  friend void somaArray(ArrayList &lista, int n);
  friend void subArray(ArrayList &lista, int n);
  friend void mulArray(ArrayList &lista, int n);
  friend void divArray(ArrayList &lista, int n);

public:
  ArrayList(int);
  ~ArrayList();

  ArrayList &add(int);

  void print() const;

  int busca(int indice) const;

  void remove(int indice);

  void removeEl(int elemento);

private:
  int *arr;
  int tam;
  int pos;
};