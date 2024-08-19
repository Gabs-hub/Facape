#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.h"

void exibe(Map M){
	printf("[");
	while( M != NULL){
		printf("(%s:%s)", M->chave, M->valor);
		if(M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}

int pertence(Chave c, Valor v, Map M){
	while(M != NULL && M->chave < c){
		M = M->prox;	
	}
	if(M != NULL && M->chave == c){
		strcpy(v, M->valor);
		return 1;
	}else{
		return 0;
	}
}

Map no_map(Chave c, Valor v, Map M){
	Map novo = (Map)malloc(sizeof(struct no));
	strcpy(novo->chave, c);
	strcpy(novo->valor, v);
	novo->prox = M;
	return novo;	
}

void inserir(Chave c, Valor v, Map* M){
	while(*M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if(*M != NULL && (*M)->chave == c){
		strcpy((*M)->valor, v);
	}else{
		*M = no_map(c,v,*M);
	}
}

int remover(Chave c, Map *M){
	while( *M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if( *M == NULL || (*M)->chave > c){
		return 0;
	}else{
		Map aux = *M;
		*M = aux->prox;
		free(aux);
		return 1;
	}
}
