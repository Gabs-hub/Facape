#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define POTENCIA(x, y) (int)pow(x, y)
#define MAIOR(x, y) (x > y ? x : y)
#define MENOR(x, y) (x < y ? x : y)

int main() {
    int num1, num2;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num1);

        if (num1 == 0)
            break;

        printf("Digite outro numero: ");
        scanf("%d", &num2);
        
        int maior = MAIOR(num1, num2);
        int menor = MENOR(num1, num2);
        int potencia = POTENCIA(num1, num2);
        
        printf("%d^%d = %d\n", num1, num2, potencia);
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    }

    return 0;
}

