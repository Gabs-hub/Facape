#include "mapeamento.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibe(Map M) {
    printf("[");
    while (M != NULL) {
        printf("(%s:%s)", M->chave, M->valor);
        if (M->prox != NULL) {
            printf(", ");
        }
        M = M->prox;
    }
    printf("]\n");
}

int pertence(Chave c, Valor v, Map M) {
    while (M != NULL && strcmp(M->chave, c) < 0) {
        M = M->prox;    
    }
    if (M != NULL && strcmp(M->chave, c) == 0) {
        strcpy(v, M->valor);
        return 1;
    } else {
        return 0;
    }
}

Map no_map(Chave c, Valor v, Map M) {
    Map novo = (Map)malloc(sizeof(struct no));
    strcpy(novo->chave, c);
    strcpy(novo->valor, v);
    novo->prox = M;
    return novo;    
}

void inserir(Chave c, Valor v, Map* M) {
    while (*M != NULL && strcmp((*M)->chave, c) < 0) {
        M = &(*M)->prox;
    }
    if (*M != NULL && strcmp((*M)->chave, c) == 0) {
        strcpy((*M)->valor, v);
    } else {
        *M = no_map(c, v, *M);
    }
}

int remover(Chave c, Map *M) {
    while (*M != NULL && strcmp((*M)->chave, c) < 0) {
        M = &(*M)->prox;
    }
    if (*M == NULL || strcmp((*M)->chave, c) > 0) {
        return 0;
    } else {
        Map aux = *M;
        *M = aux->prox;
        free(aux);
        return 1;
    }
}

