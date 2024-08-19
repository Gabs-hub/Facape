#include <stdio.h>
#include <stdlib.h>

int calcula(int troco,int qtdopcoes,int *notas){
	int total=0;
	int i = 0;
	for(i=qtdopcoes-1;i>=0;i--){
		int totalparc=troco/notas[i];
		troco -= totalparc * notas[i];
		total += totalparc;
		if(totalparc!=0){
			printf("%d objetos de %dKg\n",totalparc,notas[i]);
		}
	}
	if(troco == 0){
		printf("Solucao otima\n");
	}
	return total;		
}

int main(){
	
	int capacidade = 16;
	int p1 = 12, p2 = 8, p3 = 4, p4 = 2;
	int objetos[4] = {p4,p3,p2,p1};
	int n = 4;
	
	printf("Qtd de objetos: %d", calcula(capacidade, n, objetos));
	return 0;
}

