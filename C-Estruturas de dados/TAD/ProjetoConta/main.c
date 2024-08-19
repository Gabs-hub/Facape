#include <stdio.h>
#include <stdlib.h>
#include "cta.h"

int main() {
	Conta nossaConta;
	float v;
	abrirConta(&nossaConta);
	mostrarDados(nossaConta);
	printf("Informe o valor a ser creditado na conta: ");
	scanf("%f", &v);
	creditar(&nossaConta, v);
	mostrarDados(nossaConta);
	printf("Informe o valor a ser debitado da conta: ");
	scanf("%f", &v);
	debitar(&nossaConta, v);
	mostrarDados(nossaConta);
	return 0;
}
