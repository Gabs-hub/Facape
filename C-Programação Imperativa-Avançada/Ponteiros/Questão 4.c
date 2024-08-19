#include <stdio.h>

int main(){
	float x, *px;
	
	px = &x;
	
	printf("Digite o valor de x:");
	scanf("%f", px);
	
	*px = *px/5;
	
	printf("x/5 = %0.2f", *px);
	return 0;
}

