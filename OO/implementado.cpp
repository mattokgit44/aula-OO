#include "implementado.hpp"

/* Operações sobre um nó */
No *novoNo(int n)
{
  No *q;
  q = new No();
  q->data = n;
  q->next = NULL;
  return q;
}

void freeNo(No *p)
{
  delete (p);
  return;
}

void printNo(No *p)
{
  std::cout << p->data;
}

No *proxNo(No *p)
{
  return p->next;
}

//-----------------------------------------------------------------
// construtor default
Lista::Lista()
{
}
//-----------------------------------------------------------------
// destrutor
Lista::~Lista()
{
}

Lista *Lista::newLista(int n)
{
  Lista *p;
  p = new Lista();
  p->numero = n;
  p->primeiro = NULL;
  p->ultimo = NULL;
  return p;
}

Lista *Lista::esvaziaLista(Lista *p)
{
  No *q, *w;
  q = p->primeiro;
  while (q != NULL)
  {
    w = proxNo(q);
    freeNo(q);
    q = w;
  }
  p->primeiro = NULL;
  p->ultimo = NULL;
  return p;
}

void Lista::freeLista(Lista *p)
{
  esvaziaLista(p);
  delete (p);
  return;
}

bool Lista::listaVazia(Lista *p)
{
  if (p->primeiro == NULL)
    return true;
  else
    return false;
}

void Lista::adicionaLista(Lista *p, int n)
{
  No *q;
  q = p->primeiro;
  q->data = n;
  q->next = NULL;
}

// construtor default
nome::nome()
{
}
//-----------------------------------------------------------------
// destrutor
nome::~nome()
{
}

Lista *nome::newLista(int n)
{
  Lista *p;
  p = new Lista();
  p->numero = n;
  p->primeiro = NULL;
  p->ultimo = NULL;
  return p;
}

Lista *nome::esvaziaLista(Lista *p)
{
  No *q, *w;
  q = p->primeiro;
  while (q != NULL)
  {
    w = proxNo(q);
    freeNo(q);
    q = w;
  }
  p->primeiro = NULL;
  p->ultimo = NULL;
  return p;
}

void nome::freeLista(Lista *p)
{
  esvaziaLista(p);
  delete (p);
  return;
}

bool nome::listaVazia(Lista *p)
{
  if (p->primeiro == NULL)
    return true;
  else
    return false;
}

void nome::adicionaLista(Lista *p, int n)
{
  No *q;
  q = p->primeiro;
  q->data = n;
  q->next = NULL;
}