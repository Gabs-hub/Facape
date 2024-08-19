#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

int main() {
    Dic dicionario = dic(7);

    char palavraIngles[30];
    char traducaoPortugues[30];

    printf("Adicione as palavras no dicionario\n");
    printf("Para encerrar, digite '0'\n");

    while (1) {
        printf("\nDigite a palavra em ingles: ");
        scanf("%s", palavraIngles);
        

        if (strcmp(palavraIngles, "0") == 0){
        	break;
		}
		
        printf("Digite a tradução em portugues: ");
        scanf("%s", traducaoPortugues);
        
        if (strcmp(traducaoPortugues, "0") == 0){
        	break;
		}
		
        insDic(palavraIngles, traducaoPortugues, dicionario);
    }

    //exibeDic(dicionario);

    printf("\nCONSULTAR TRADUCAO\n");
    while (1) {
        printf("\nDigite a palavra em ingles (ou '0' para encerrar): ");
        scanf("%s", palavraIngles);

        if (strcmp(palavraIngles, "0") == 0){
        	break;
		}

        if (pertDic(palavraIngles, traducaoPortugues, dicionario)) {
            printf("A traducao de %s eh %s\n", palavraIngles, traducaoPortugues);
        } else {
            printf("Nao foi encontrada traducao para '%s'\n", palavraIngles);
        }
    }

    return 0;
}

