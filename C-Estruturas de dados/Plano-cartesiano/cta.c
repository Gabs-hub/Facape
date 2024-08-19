#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "cta.h"

void criar_ponto(Vetor *v){
	int i;
	printf("C:(");
	for(i=0;i<2;i++){
		v->pontos[i]=rand() %100;
		printf(" %d ", v->pontos[i]);
	}
	printf(")\n");
}

float calc_coord(Vetor v1, Vetor v2){
	float distancia = sqrt(pow(v2.pontos[0] - v1.pontos[0], 2) + pow(v2.pontos[1] - v1.pontos[1], 2));
    printf("Distancia entre os pontos A e B = %0.2f\n", distancia);
}

