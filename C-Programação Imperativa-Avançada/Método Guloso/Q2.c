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
			printf("%d notas de %d\n",totalparc,notas[i]);
		}
	}
	return total;		
}


int main(){
	
	int qtdopcoes=3,troco,i;
	
	printf("Digite a quantidade de opcoes: ");
	scanf("%d", &qtdopcoes);
	
	int *notas = (int*) malloc(qtdopcoes * sizeof(int));
	
	for(i=0; i<qtdopcoes; i++){
		printf("Digite as notas disponiveis: ");
		scanf("%d", &notas[i]);
	}
	
	printf("Digite o valor do troco: ");
	scanf("%d", &troco);
	
	printf("Qtd de notas: %d",calcula(troco,qtdopcoes,notas));
	
	free(notas);
	
	return 0;
}


