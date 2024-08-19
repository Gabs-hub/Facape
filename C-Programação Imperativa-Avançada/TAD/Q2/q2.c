#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q2.h"

void adicionarProdutos(Produto *P){
	int codigo;
    char nome[50];
    int quantidade;
    float preco;
    
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite o nome do produto: ");
    scanf("%s", &nome);
    printf("Digite a quantidade de produtos em estoque: ");
    scanf("%d", &quantidade);
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    
    P->codigo = codigo;
    strcpy(P->nome, nome);
    P->quantidade = quantidade;
    P->preco = preco;
    
}

void mostrarProdutos(Produto P){
	printf("\n\nCodigo do produto: %d", P.codigo);
	printf("\nNome do produto: %s", P.nome);
	printf("\nQuantidade em estoque: %d", P.quantidade);
	printf("\nValor do produto: %.2f", P.preco);
}

