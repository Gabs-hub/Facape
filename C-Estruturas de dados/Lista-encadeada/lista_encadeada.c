#include "lista_encadeada.h"
#include <stdio.h>
#include <stdlib.h>

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void inicializarLista(Lista *lista) {
    *lista = NULL;
}

int listaVazia(Lista lista) {
    return lista == NULL;
}

void inserirElemento(Lista *lista, Item elemento) {
    *lista = no(elemento, *lista);
}

void imprimirLista(Lista lista) {
    if (!listaVazia(lista)) {
        printf("Elementos da lista: ");
        while (lista != NULL) {
            printf("%d ", lista->item);
            lista = lista->prox;
        }
        printf("\n");
    } else {
        printf("Lista vazia.\n");
    }
}

void liberarLista(Lista *lista) {
    Lista atual = *lista;
    while (atual != NULL) {
        Lista proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    *lista = NULL;
}

