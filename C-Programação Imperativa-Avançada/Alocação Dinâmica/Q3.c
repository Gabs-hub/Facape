#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz;
    int l, c;
    int i, j;

    printf("Digite as linhas: ");
    scanf("%d", &l);

    printf("Digite as colunas: ");
    scanf("%d", &c);

    matriz = (int**) malloc(l * sizeof(int*));

    for(i = 0; i < l; i++){
        matriz[i] = (int*) malloc(c * sizeof(int));
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            matriz[i][j] = j;
        }
    }

    printf("Matriz:\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < l; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

