#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Informe os 3 parametros.\n");
        return 1;
    }
    
    float s, t, media;
    
    s = atof(argv[1]);
    t = atof(argv[2]);
    
    media = s/t;
    printf("Velocidade media: %0.2f m/s\n", media);
    
    return 0;
}

