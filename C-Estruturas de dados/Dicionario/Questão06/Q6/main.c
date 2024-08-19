#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

int main() {
	int tamanho, ret;
	Valor nome, resultado;
	Chave matricula;
	Dic meuDic;
	printf("Informe o tamanho do dicionario: ");
	scanf("%d",&tamanho);
	meuDic = dic(tamanho);
	printf("Digite a matricula alafanumerica ou zero pra encerrar: ");
	scanf("%s",&matricula);
	while(strcmp(matricula, "0") != 0){
		fflush(stdin);
		printf("Digite o nome: ");
		gets(nome);
		insDic(matricula, nome, meuDic);
		printf("Digite a matricula alfanumerica ou zero pra encerrar:: ");
		scanf("%s",&matricula);
	}
	exibeDic(meuDic);

	return 0;
}
