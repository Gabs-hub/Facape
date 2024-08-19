#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 5) {
        printf("Informe os 5 parametros.\n");
        return 1;
    }
    float n1,n2,media;
    
    n1 = atof(argv[3]);
    n2 = atof(argv[4]);
    
    media = (n1+n2)/2;
    
    printf("%s tem a media de %0.2f\n", argv[2], media);
    
    return 0;
}

