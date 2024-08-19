#include <stdio.h>
#include <stdlib.h>

int* alocarVetor(int tamanho) {
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    return vetor;
}

void liberarVetor(int* vetor) {
    free(vetor);
}

int main() {
    int *vetor;
    int n, i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    vetor = alocarVetor(n);
    
    for(i=0;i<n;i++){
        vetor[i]=i;
    }
    printf("[ ");
    for(i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }
    printf("]");
    
    liberarVetor(vetor);
    
    return 0;
}
