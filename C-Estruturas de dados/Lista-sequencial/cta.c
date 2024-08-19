#include <stdio.h>
#include <stdlib.h>
#include "cta.h"

void criarLista(Lista* L, int tamanho){
	L->itens = (int *)malloc(tamanho * sizeof(int));
    if (L->itens == NULL) {
        printf("Erro: falha ao alocar memoria\n");
    }else{
    	L->tamanho = tamanho;
		printf("Lista inicializada com sucesso!\n");
		L->fim = 0;
	}
}

int vazia(Lista L){
	return(L.fim == 0);
}

int cheia(Lista L){
	return(L.fim == L.tamanho);
}

void mostrarPosicao(Lista L, int posicao){
	printf("O numero da posicao %d eh %d\n", posicao, L.itens[posicao]);
}

void mostrarElemento(Lista L, int elemento){
	int i, pos;
	pos=-1;
	for(i=0;i<L.tamanho;i++){
		if(elemento == L.itens[i]){
			pos=i;
		}
	}
	if(pos==-1){
		printf("O elemento %d nao existe no vetor\n", elemento);
	}else{
		printf("O elemento %d esta na posicao %d\n", elemento, pos);
	}
}

void limpar(Lista *L){
	free(L->itens);
    L->itens = NULL;
    L->tamanho = 0;
    L->fim = 0;
    printf("\nA lista agora foi zerada\n");
}


