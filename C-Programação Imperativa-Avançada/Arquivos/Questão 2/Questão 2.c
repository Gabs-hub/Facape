#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero, soma = 0;
    
    arquivo = fopen("numeros.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Numeros lidos do arquivo:\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
        soma += numero;
    }
    
    fclose(arquivo);
    
    printf("Soma dos numeros: %d\n", soma);
    
    return 0;
}

