#include <stdio.h>

int main() {
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = 10, inicio = 0, fim = n - 1, meio, resultado = 0, s;

    printf("Digite valor a ser buscado: ");
    scanf("%d", &s);

    while (inicio <= fim && resultado == 0) {
        meio = (inicio + fim) / 2;
        
        printf("Divisao: inicio = %d, meio = %d, fim = %d\n", inicio, meio, fim);

        if (s > a[meio]) {
            inicio = meio + 1;
        } else if (s < a[meio]) {
            fim = meio - 1;
        } else {
            resultado = 1;
        }
    }

    if (resultado == 1) {
        printf("Valor encontrado, posicao no vetor: %d\n", meio);
    } else {
        printf("Valor nao encontrado\n");
    }

    return 0;
}

