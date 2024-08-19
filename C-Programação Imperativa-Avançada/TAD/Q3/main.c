#include <stdio.h>
#include <stdlib.h>
#include "q3.h"


int main() {
	Numeros num;
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	adicionarNumeros(&num, n1, n2);
	
	printf("\nSoma: %d\n", somarNumeros(num));
	printf("Multiplicacao: %d\n", multiplicarNumeros(num));
	printf("Iguais?: %s\n", compararNumeros(num));
	
	
	return 0;
}
