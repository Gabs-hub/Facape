#include <stdio.h>
#include <stdlib.h>

int troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	
	return *a, *b;
}
int main(){
	int a, b;
	
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	
	troca(&a,&b);
	
	printf("Valor de a: %d\n", a);
	printf("Valor de b: %d\n", b);
	
	return 0;
}

