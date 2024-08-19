#include <stdio.h>
#include <stdio.h>

void ordena(int vetor[]) {
    int aux;
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[3];

    printf("Digite o valor de A: ");
    scanf("%d", &vetor[0]);
    printf("Digite o valor de B: ");
    scanf("%d", &vetor[1]);
    printf("Digite o valor de C: ");
    scanf("%d", &vetor[2]);

    ordena(vetor);

    printf("Valores ordenados:\nA = %d\nB = %d\nC = %d\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}

