#include <stdio.h>
#include <stdlib.h>
#define QUADRADO(x)(x*x)
#define CUBO(x)(x*x*x)

int main(){
	int n;
	int quad, cubo;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	quad = QUADRADO(n);
	cubo = CUBO(n);
	
	printf("QUADRADO: %d\n", quad);
	printf("CUBO: %d\n", cubo);
	
	return 0;
}

