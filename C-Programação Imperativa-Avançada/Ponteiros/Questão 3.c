#include <stdio.h>
#include <stdlib.h>
int main(){
	struct aluno{
		char nome[30];
		int matricula;
		float media, nota1, nota2;
	};
	typedef struct aluno Aluno;
	
	Aluno aluno;
	
	char* pnome;
	int* pmat;
	float* pmedia, *pnota1, *pnota2;
	
	pnome = aluno.nome;
	pmat = &aluno.matricula;
	pmedia = &aluno.media;
	pnota1 = &aluno.nota1;
	pnota2 = &aluno.nota2;
	pmedia = &aluno.media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", pnome);
	printf("Digite a matricula do aluno: ");
	scanf("%d", pmat);
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", pnota1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", pnota2);
	
	
	*pmedia = (*pnota1+*pnota2)/2;
	
    printf("\nNome: %s\n", pnome);
    printf("Matricula: %d\n", *pmat);
    printf("Nota 1: %.2f\n", *pnota1);
    printf("Nota 2: %.2f\n", *pnota2);
    printf("Media: %.2f\n", *pmedia);
    
    if (*pmedia >= 6) {
        printf("O aluno foi aprovado!\n");
    } else {
        printf("O aluno foi reprovado!\n");
    }
    
	return 0;
}

