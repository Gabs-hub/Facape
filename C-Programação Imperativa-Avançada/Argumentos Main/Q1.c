#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Informe pelo menos 3 parametros.\n");
        return 1;
    }
    
    int soma = 0;
    int i;
    
    for (i = 1; i < argc; i++) {
        soma += atoi(argv[i]);
    }
    
    printf("Soma dos valores: %d\n", soma);
    
    return 0;
}

