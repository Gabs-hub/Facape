#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n, i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    vetor=(int*) malloc (n*sizeof(int));
    
    for(i=0;i<n;i++){
        vetor[i]=i;
    }
    printf("[ ");
    for(i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }
    printf("]");
    return 0;
}
