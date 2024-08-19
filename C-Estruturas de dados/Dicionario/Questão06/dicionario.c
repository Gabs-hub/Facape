#include <stdio.h>
#include <stdlib.h>
#include "dicionario.h"

int hash(Chave c, int m){
	int num, i;
	int cont = 1;
	for (i = 0; c[i] != '\0'; i++) {
        if (isdigit(c[i])) {
            num += (c[i] - '0');
        } else if (isalpha(c[i])) {
            if (islower(c[i])) {
                num += cont*((c[i]) - 'a' + 1);
                cont++;
            } else {
                num += cont*((c[i]) - 'A' + 2);
                cont++;
            }
        }
	}
	return (num % m);
}


Dic dic(int m){
	int i;
	Dic d;
	d = (Dic)malloc(sizeof(struct dic));
	d->tam = m;
	d->vet = malloc(m * sizeof(Map));
	
	for(i=0; i<m; i++){
		d->vet[i] = NULL;
	}
	
	printf("Dicionario inicializado!\n");
	return d;
}

void insDic(Chave c, Valor v, Dic d){
	int pos = hash(c, d->tam);
	inserir(c, v, &d->vet[pos]);
}

int remDic(Chave c, Dic d){
	int pos = hash(c, d->tam);
	return remover(c, &d->vet[pos]);
}

void exibeDic(Dic d){
	int i;
	for(i=0; i < d->tam; i++){
		printf("%d : ", i);
		exibe(d->vet[i]);
	}
}

int pertDic(Chave c, Valor v, Dic d){
	int pos = hash(c, d->tam);
	return pertence(c, v, d->vet[pos]);
}

