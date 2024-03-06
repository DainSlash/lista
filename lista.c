#include "lista.h"


void init_lista(lista *l) {
	l->tam = 0;
}

bool acessar(lista *l, int pos, t_dado *ret){
	if(pos >= MAX_TAM || pos < 0 || pos >= l->tam) return false;
	*ret = l->itens[pos];
	return true;
}

bool alterar(lista *l, int pos, t_dado dado){
	if(pos >= MAX_TAM || pos < 0 || pos >= l->tam) return false;
	l->itens[pos] = dado;
}

bool inserir(lista *l, int pos, t_dado dado){
	if(pos >= MAX_TAM || pos < 0 || l->tam == MAX_TAM) return false;
		
	int i;	
	for(i = l->tam - 1; i >= pos; i--) l->itens[i+1] = l->itens[i];
	
	
	
	l->itens[pos] = dado;
	l->tam++;
	
	return true;
}

bool remover(lista *l, int pos){
	if(pos >= MAX_TAM || pos < 0 || pos >= l->tam || l->tam == 0) return false;
	
	int i;
	for(i = pos+1; i < l->tam; i++) l->itens[i-1] = l->itens[i];
	
	l->tam--;
	return true;
}

int len(lista l) {
	return l.tam;
}

bool buscar(lista l, t_dado dado, int *pos){
	int i;
	for(i=0; i < l.tam; i++) if(l.itens[i] == dado) {
			*pos = i;
			return true;
		}
	return false;
}

bool concatenar(lista l1, lista l2, lista *result){
	result->tam = (l1.tam+l2.tam);
	if(result->tam >= MAX_TAM) return false;
	
	int i;
	for(i=0;i<l1.tam;i++){
		result->itens[i] = l1.itens[i];
	}
	for(i=0;i<l2.tam;i++){
		result->itens[i+l1.tam] = l2.itens[i];
	}
	return true;

}


