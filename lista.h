#ifndef _LISTA_H
#define _LISTA_H
#include <stdbool.h>


#define MAX_TAM 20
typedef int t_dado;
typedef struct{
	t_dado itens[MAX_TAM];
	int tam;
} lista;


//construct
void init_lista(lista *);
//acessar o k-esimo elemento da lista
bool acessar(lista *, int, t_dado *);
//aleterar o k-esimo elemento da lista
bool alterar(lista *, int, t_dado);
//inserir um novo no na k-esima posicao da lista
bool inserir(lista *, int, t_dado);
//remover o k-esimo elemento da lista
bool remover(lista *, int);
///determinar o numero de nos de uma lista
int len(lista);
//linear search ja que a lista nao necessariamente esta ordenada
bool buscar(lista , t_dado, int *);
//concatenar listas
bool concatenar(lista, lista, lista *);

#endif
