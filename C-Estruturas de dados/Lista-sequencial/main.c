#include <stdio.h>
#include <stdlib.h>
#include "cta.h"

int main() {
	Lista numeros;
	int n;
	printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	criarLista(&numeros, n);
	printf("Lista vazia?: %d\n", vazia(numeros));
	printf("Lista cheia?: %d\n", cheia(numeros));
	
	int i;
	for(i=0;i<n;i++){
		printf("Digite um numero a ser adicionado:");
		scanf("%d", &numeros.itens[i]);
	}
	
	int p;
	printf("\nDigite a POSICAO que quer visualizar:");
	scanf("%d", &p);
	while(p<0||p>n-1){
		printf("Erro, digite um valor correspondente a posicao do vetor:");
		scanf("%d", &p);
	}
	mostrarPosicao(numeros, p);
	
	int e;
	printf("\nDigite o ELEMENTO que quer visualizar:");
	scanf("%d", &e);
	mostrarElemento(numeros, e);
	
	limpar(&numeros);
	printf("Fim do programa");
	return 0;
}
