#include <stdio.h>
#include "lista.h"


int main(){
	lista Lista, Lista2, Resultado;
	init_lista(&Lista);
	
	printf("\n\nTamanho da lista eh: %d\n",len(Lista));
	
	
	int i;
	for(i=0;i<10;i++){
		inserir(&Lista, i, i+1);
	}
	
	inserir(&Lista, 2, 200);
	
	
	
	for(i=0;i<len(Lista);i++){
		int n;
		acessar(&Lista, i, &n);
		printf("\nO elemento na pos %d eh %d",i,n);
	}
	
	int pos, n = 210;

	
	if(buscar(Lista, n, &pos)) 
		printf("\nElemento %d, achado na pos %d",n , pos);
	else printf("\nElemento %d nao encontrado",n);
	
	printf("\n\nTamanho da lista eh: %d\n",len(Lista));
	
	init_lista(&Lista2);
	init_lista(&Resultado);
	
	printf("\n\nTamanho da lista 2 eh: %d\n",len(Lista2));
	
	for(i=0;i<5;i++){
		inserir(&Lista2, i, i+1);
	}
	
	for(i=0;i<len(Lista2);i++){
		int n;
		acessar(&Lista2, i, &n);
		printf("\nO elemento na pos %d eh %d",i,n);
	}
	printf("\n\nnTamanho da lista 2 eh: %d\n",len(Lista2));
	
	
	printf("\n\n\nLista concatenada\n\n");
	
	concatenar(Lista, Lista2, &Resultado);
	
	printf("\nTamanho da lista concatenada eh: %d\n",len(Resultado));
	
	
	for(i=0;i<len(Resultado);i++){
		int n;
		acessar(&Resultado, i, &n);
		printf("\nO elemento na pos %d eh %d",i,n);
	}
	
	return 0;
}

