#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cta.h"

int main() {
	Pilha caracteres;
	char string[tam];
	printf("Digite a expressao: ");
	scanf("%s", string);
	int i;
	
	criarPilha(&caracteres);
	
	char *posfixa = infix_para_posfix(&caracteres, string);
	printf("posfixa: %s\n", posfixa);
    
    float resultado = avaliar_posfixa(&caracteres, posfixa);
    printf("resultado: %0.2f\n", resultado);
    
    free(posfixa);
    
	return 0;
}
