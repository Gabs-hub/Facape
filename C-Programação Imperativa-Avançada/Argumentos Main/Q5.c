#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 4) {
        printf("Informe os 4 parametros.\n");
        return 1;
    }
    float receita,despesa,lucro;
    
    receita = atof(argv[2]);
    despesa = atof(argv[3]);
    
    lucro = receita - despesa;
    
    printf("%s teve o lucro de %0.2f\n", argv[1], lucro);
    
    return 0;
}

