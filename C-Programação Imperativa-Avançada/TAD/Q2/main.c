#include <stdio.h>
#include <stdlib.h>
#include "q2.h"


int main() {
	Produto *produtos;
	int tamanho, i;
	
	printf("Digite a quantidade de produtos que deseja cadastrar: ");
	scanf("%d", &tamanho);
	
	produtos = (struct produto*)malloc(tamanho * sizeof(struct produto));
	if (produtos == NULL) {
        printf("Falha ao alocar memória.");
        return 1;
    }
    
    for(i=0;i<tamanho;i++){
    	adicionarProdutos(&produtos[i]);
	}
	
	printf("\nPRODUTOS CADASTRADOS");
	for(i=0;i<tamanho;i++){
    	mostrarProdutos(produtos[i]);
	}
	free(produtos);
	
	return 0;
}
