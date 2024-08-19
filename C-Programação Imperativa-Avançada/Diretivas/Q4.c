#include <stdio.h>
#include <stdlib.h>
#define AREA(x,y)(x*y)

int main(){
	int b,h;
	int area;
	
	printf("Digite a base: ");
	scanf("%d", &b);
	
	printf("Digite a altura: ");
	scanf("%d", &h);
	
	area = AREA(b,h);
	
	printf("Area = %d\n", area);
	
	return 0;
}

