#include <stdio.h>
#include <stdlib.h>
#include "cta.h"

int main() {
	
	int i;
	
	Vetor vetor1;
	printf("Potnos do primeiro participante:\n");
    for (i = 0; i < 2; i++) {
        printf("Pontuacao %d: ", i + 1);
        scanf("%f", &vetor1.pontos[i]);
    }
    
    Vetor vetor2;
    printf("Pontos do segundo participante:\n");
    for (i = 0; i < 2; i++) {
        printf("Pontuacao %d: ", i + 1);
        scanf("%f", &vetor2.pontos[i]);
    }
    
    float media1, media2;
    
    media1 = calcular_media(vetor1);
    media2 = calcular_media(vetor2);
    
    if(media1>media2){
    	printf("\nJogador1 vence com %0.2f pontos\n\n", media1);
	} else if(media2>media1){
    	printf("\nJogador2 vence com %0.2f pontos\n\n", media2);
	} else{
		printf("\nEmpate, ambos com %0.2f pontos\n\n", media1);
	}
	
	for (i = 0; i < 2; i++) {
        printf("\nPontuacoes jogador 1: %0.2f", vetor1.pontos[i]);
    }
    for (i = 0; i < 2; i++) {
        printf("\nPontuacoes jogador 2: %0.2f", vetor2.pontos[i]);
    }
	printf("\nMedia jogador1 %0.2f", media1);
	printf("\nMedia jogador2 %0.2f", media2);
	
	return 0;
}
