#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Informe os 3 parametros.\n");
        return 1;
    }
    
    float b, h, area;
    
    b = atof(argv[1]);
    h = atof(argv[2]);
    
    area = (b*h)/2;
    printf("Area: %0.2f u.a.\n", area);
    
    return 0;
}

