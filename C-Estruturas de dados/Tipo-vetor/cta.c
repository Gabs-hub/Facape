#include <stdio.h>
#include "cta.h"

float calcular_media(Vetor vetor) {
    float soma = 0;
    int i;
    for (i = 0; i < 2; i++) {
        soma += vetor.pontos[i];
    }
    return soma / 2;
}
