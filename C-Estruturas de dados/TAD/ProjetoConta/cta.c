#include <stdio.h>
#include "cta.h"

//IMPLEMENTAÇÃO

void abrirConta(Conta* c){
	printf("Digite o numero da conta: ");
	scanf("%d", &c->numero);
	printf("Digite o nome do titular da conta: ");
	scanf("%s", c->titular);
	printf("Digite o saldo inicial da conta: ");
	scanf("%f", &c->saldo);
}

void creditar(Conta* c, float valor){
	c->saldo = c->saldo + valor;
	printf("Credito efetuado com sucesso!\n");
}

void mostrarDados(Conta c){
	printf("DADOS DA CONTA NUMERO %d\n", c.numero);
	printf("Nome do titular: %s\n", c.titular);
	printf("Saldo da conta: R$ %0.2f\n", c.saldo);
}

void debitar(Conta* c, float valor){
	c->saldo = c->saldo - valor;
	printf("Debito efetuado com sucesso!\n");
}
