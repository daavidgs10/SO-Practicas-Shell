/*
  Sistemas Operativos
  Práctica 1
  Carlos Torres (carlos.torres)
  Daniel Sergio Vega (d.s.vega)
  Grupo 4.3
*/

#ifndef __DYN_LIST
  #define __DYN_LIST
  #include "exinf.h"
  
  //Interfaz

  typedef struct node * lista;
  typedef struct node ** iterator;
  
  lista CreateList();
  
  void InsertElement(lista *last, void *element);
  
  int RemoveElement(lista *plist, int position);
  
  void disposeAll(lista * ptolist);

  iterator first(lista list);

  iterator next(iterator p);

  iterator isLast(iterator p);

  void * getElement(iterator p);

#endif
