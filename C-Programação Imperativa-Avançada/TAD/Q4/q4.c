#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q4.h"

void lerSocios(Socios **socios, int *i, float *renda) {
    *i = 0;
    int sair = 0;
    int j;
    int cont=0;
    float sal;
    do {
        *socios = realloc(*socios, (*i + 1) * sizeof(Socios));
        if (*socios == NULL) {
            printf("Erro ao alocar memória.\n");
            exit(1);
        }
        printf("Insira o nome do socio: ");
        scanf("%s", (*socios)[*i].nome);
        printf("Insira a idade do socio: ");
        scanf("%d", &(*socios)[*i].idade);
        printf("Insira a matricula do socio: ");
        scanf("%d", &(*socios)[*i].matricula);
        printf("Insira o estado civil do socio: ");
        scanf("%s",(*socios)[*i].civil);
        for (j = 0; (*socios)[*i].civil[j] != '\0'; j++) {
            (*socios)[*i].civil[j] = toupper((*socios)[*i].civil[j]);
        }
        if (strcmp((*socios)[*i].civil, "CASADO") == 0) {
            cont++;
            printf("Digite a renda do casado: ");
            scanf("%f", &sal);
            *renda += sal;
        }
        printf("Insira o turno do socio: ");
        scanf("%s", (*socios)[*i].turno);
        printf("Deseja adicionar outro socio? (Sim[1] Nao[0]): ");
        scanf("%d", &sair);
        while (sair != 0 && sair != 1) {
            printf("Digite 1 para continuar e 0 para sair: ");
            scanf("%d", &sair);
        }
        (*i)++;
    } while (sair != 0);
    *renda/=cont;
    if(cont==0){
    	*renda = 0;
	}
}

