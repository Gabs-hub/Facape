#include <stdio.h>
#include <stdlib.h>
#include "q4.h"

int main() {
	Socios *socios = NULL;
	int tamanho;
	float renda = 0;
	lerSocios(&socios, &tamanho, &renda);
	
	printf("\nQuantidade de socios: %d\n", tamanho);
	printf("Renda media dos casados: %.2f", renda);
	
	return 0;
}
