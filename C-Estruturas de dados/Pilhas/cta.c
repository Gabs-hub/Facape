#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cta.h"

void criarPilha(Pilha* p){
	p->itens = malloc(tam * sizeof(char));
    if (p->itens == NULL) {
        printf("Erro ao alocar memória.\n");
    }else{
    	p->topo = -1;
    	p->tamanho = tam;
    	printf("Pilha inicializada!\n");
	}
}

int vazia(Pilha p){
	return(p.topo == -1);
}

int cheia(Pilha p){
	return(p.topo == tam - 1);
}

void push(Pilha* p, char item){
	if(cheia(*p)){
		p->tamanho *= 2;
        p->itens = realloc(p->itens, p->tamanho * sizeof(char));
    }
	p->topo++;
	p->itens[p->topo] = item;
}

int pop(Pilha* p){
	int ret = -1;
	if(vazia(*p)){
		printf("A operacao provoca UNDERFLOW\n");
	}else{
		ret = p->itens[p->topo];
		p->topo--;
	}
	return ret;
}

int prioridade(char item) {
    if (item == '+' || item == '-'){
    	return 1;
	}else if (item == '*' || item == '/'){
		return 2;	
	}else if (item == '('){
		return 0;
	}else{
		return -1;
	}
}

char* infix_para_posfix(Pilha *p, char* item) {
    int tamanho = strlen(item);
    char* posfixa = (char*)malloc((tamanho + 1) * sizeof(char));
    if (posfixa == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }
    int pos = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        if (isdigit(item[i])) {
            posfixa[pos++] = item[i];
        } else if (item[i] == '(') {
            push(p, item[i]);
        } else if (item[i] == ')') {
            while (!vazia(*p) && p->itens[p->topo] != '(') {
                posfixa[pos++] = pop(p);
            }
            if (!vazia(*p) && p->itens[p->topo] == '(')
                pop(p);
        } else {
            while (!vazia(*p) && prioridade(item[i]) <= prioridade(p->itens[p->topo])) {
                posfixa[pos++] = pop(p);
            }
            push(p, item[i]);
        }
    }

    while (!vazia(*p)) {
        posfixa[pos++] = pop(p);
    }

    posfixa[pos] = '\0';

    return posfixa;
}

float avaliar_posfixa(Pilha* p, char* posfixa) {
    float resultado=0;
	int tamanho = strlen(posfixa);
    int i;
    for (i = 0; i < tamanho; i++) {
        char caractere = posfixa[i];
        
        if (isdigit(caractere)) {
            push(p, caractere - '0');
        } else if (caractere == '+' || caractere == '-' || caractere == '*' || caractere == '/') {
            float op2 = pop(p);
            float op1 = pop(p);
            
            switch (caractere) {
                case '+':
                    resultado = op1 + op2;
                    break;
                case '-':
                    resultado = op1 - op2;
                    break;
                case '*':
                    resultado = op1 * op2;
                    break;
                case '/':
                    resultado = op1 / op2;
                    break;
            }
        }
    }
    return resultado;
}
