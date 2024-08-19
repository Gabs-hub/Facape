#include <stdio.h>
#include <stdlib.h>

int soma(int arvore[7]){
	int meio = 3;
	int soma = 7;
	
	if(arvore[meio+2] > arvore[meio-2]){
		soma += arvore[meio+2];
		meio += 2;
		if(arvore[meio+1] > arvore[meio-1]){
			soma += arvore[meio+1];
		}else{
			soma += arvore[meio-1];
		}
	}else{
		soma += arvore[meio-2];
		meio -= 2;
		if(arvore[meio+1] > arvore[meio-1]){
			soma += arvore[meio+1];
		}else{
			soma += arvore[meio-1];
		}
	}
	
	return soma;
}

int main() {
    int arvore[7] = {99, 3, 8, 7, 5, 12, 6};
    
    printf("Maior soma possivel: %d\n", soma(arvore));

    return 0;
}

