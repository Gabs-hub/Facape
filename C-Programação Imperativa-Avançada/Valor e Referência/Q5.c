#include <stdio.h>
#include <stdlib.h>

int maxpot(int x, int y, int max, int *result) {
    *result = x * y;

    if (*result > max) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, max, result;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    
    printf("Digite o valor de MAX: ");
    scanf("%d", &max);
    
    int retorno = maxpot(x, y, max, &result);
    
    if (retorno == 1) {
        printf("O resultado de %d * %d = %d, que eh maior que %d\n", x, y, result, max);
    } else {
        printf("O resultado de %d * %d = %d, que nao eh maior que %d\n", x, y, result, max);
    }
    
    return 0;
}

