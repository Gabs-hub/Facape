#include<stdio.h>
#include<stdlib.h>

struct cliente{
	   char *nome;
	   char *cidade;
	   char *estado;
};
typedef struct cliente Cliente;


int main(){
	Cliente cliente1;
	
	cliente1.nome=(char*)malloc(30*sizeof(char));
	cliente1.cidade=(char*)malloc(30*sizeof(char));
	cliente1.estado=(char*)malloc(30*sizeof(char));
	
	printf("Digite o nome da pessoa: ");
	scanf("%s", cliente1.nome);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", cliente1.cidade);
	
	printf("Digite o nome do Estado: ");
	scanf("%s", cliente1.estado);
	
	printf("\n %s", cliente1.nome);
	printf("\n %s", cliente1.cidade);
	printf("\n %s", cliente1.estado);
	
	free(cliente1.nome);
	free(cliente1.cidade);
	free(cliente1.estado);
	return 0;
}


