#include <stdio.h>
#include <stdlib.h>
#define PAR_IMPAR(x) ((x) % 2 == 0 ? "par" : "impar")

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero %d eh %s.\n", numero, PAR_IMPAR(numero));

    return 0;
}

