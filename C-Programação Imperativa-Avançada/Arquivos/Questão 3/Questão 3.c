#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[30];
    
    arquivo = fopen("nomes.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Nomes lidos do arquivo:\n");
    while (fscanf(arquivo, "%s", nome) == 1) {
        printf("%s\n", nome);
    }
    
    fclose(arquivo);
    
    return 0;
}

