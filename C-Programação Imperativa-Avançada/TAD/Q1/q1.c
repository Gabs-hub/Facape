#include <stdio.h>
#include <string.h>
#include "q1.h"

void cadastro(Aluno *A, const char *nome, const char *matricula){
	strcpy(A->nome, nome);
	strcpy(A->matricula, matricula);
}
void media(Aluno *A, float p1, float p2){
	float media;
	A->p1 = p1;
	A->p2 = p2;
	media = (p1+p2)/2;
	A->p3 = media;
}
void mostrar(Aluno A){
    printf("CADASTRO\n");
    printf("Nome: %s\n", A.nome);
    printf("Matricula: %s\n", A.matricula);
    printf("Media: %0.2f\n", A.p3);
}
