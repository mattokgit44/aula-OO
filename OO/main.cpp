#include <iostream>
#include "implementado.hpp"

int main()
{
  Lista *p;
  int num;
  // Criando uma nova lista
  std::cout << "Digite o numero da lista: ";
  std::cin >> num;
  p->newLista(num);
  p->adicionaLista(p, 10);
  // Exibindo a lista
  printNo(p->primeiro);
  nome *l;
  l->newLista(num);
  l->adicionaLista(p,15);
  l->name = '2';
  printNo(l->primeiro);

  return 0;
}