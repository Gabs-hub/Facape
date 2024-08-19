#include <stdio.h>
#include <stdlib.h>

void atribquad(float l){
	float area, perimetro;
	
	area = l*l;
	perimetro = l*4;
	
	printf("Area = %0.2f\n", area);
	printf("Perimetro = %0.2f", perimetro);
	
}
int main(){
	float l;
	printf("Digite o valor de l: ");
	scanf("%f", &l);
	
	atribquad(l);
	return 0;
}

