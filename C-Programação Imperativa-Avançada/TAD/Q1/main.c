#include <stdio.h>
#include <stdlib.h>
#include "q1.h"

int main() {
	Aluno aluno;
	char nome[81];
	char matricula[8];
	float p1, p2;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("Digite a matricula do aluno: ");
	scanf("%s", &matricula);
	
	printf("Digite a nota 1 do aluno: ");
	scanf("%f", &p1);
	printf("Digite a nota 2 do aluno: ");
	scanf("%f", &p2);
	
	cadastro(&aluno, nome, matricula);
	media(&aluno, p1, p2);
	mostrar(aluno);
	
	return 0;
}
