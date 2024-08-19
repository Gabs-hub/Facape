#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "dicionario.h"

int hash(Chave c, int m) {
    int num, i;
	for (i = 0; c[i] != '\0'; i++) {
        c[i] = tolower(c[i]);
        num += ((c[i]) - 'a' + 1);
	}
	return (num % m);
}

Dic dic(int m) {
    int i;
    Dic d;
    d = (Dic)malloc(sizeof(struct dic));
    d->tam = m;
    d->vet = malloc(m * sizeof(Map));
    
    for (i = 0; i < m; i++) {
        d->vet[i] = NULL;
    }
    return d;
}

void insDic(Chave c, Valor v, Dic d) {
    int pos = hash(c, d->tam);
    inserir(c, v, &d->vet[pos]);
}

int remDic(Chave c, Dic d) {
    int pos = hash(c, d->tam);
    return remover(c, &d->vet[pos]);
}

void exibeDic(Dic d) {
    int i;
    for (i = 0; i < d->tam; i++) {
        printf("%d : ", i);
        exibe(d->vet[i]);
    }
}

int pertDic(Chave c, Valor v, Dic d) {
    int pos = hash(c, d->tam);
    return pertence(c, v, d->vet[pos]);
}

