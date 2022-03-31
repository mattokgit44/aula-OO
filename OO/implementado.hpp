#pragma once
#include <iostream> //std::ostream

struct no
{
  int data;
  struct no *next;
};

typedef struct no No;

No *novoNo(int n);

void freeNo(No *p);

void printNo(No *p);

No *proxNo(No *p);

class Lista
{

public:
  // construtor default
  Lista();

  // destrutor
  ~Lista();

  Lista *newLista(int numero);
  Lista *esvaziaLista(Lista *p);
  void freeLista(Lista *p);
  bool listaVazia(Lista *p);
  void adicionaLista(Lista *p, int n);

  No *primeiro;

private:
  int numero;
  No *ultimo;
};

class nome : public Lista
{
  public:
  char name;
  // construtor default
  nome();

  // destrutor
  ~nome();

  Lista *newLista(int numero);
  Lista *esvaziaLista(Lista *p);
  void freeLista(Lista *p);
  bool listaVazia(Lista *p);
  void adicionaLista(Lista *p, int n);

  No *primeiro;
};