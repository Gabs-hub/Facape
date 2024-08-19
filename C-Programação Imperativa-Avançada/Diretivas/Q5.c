#include <stdio.h>
#include <stdlib.h>
#define ESCOLHA 0 //muda aqui pra trocar entre as notas e numeros primos

#define NOTAS(nota1, nota2) (((nota1) + (nota2)) / 2 >= 7 ? "Aprovado" : "Reprovado")
#define PRIMO(numero) (is_prime(numero) ? "Primo" : "Nao primo")

int is_prime(int num) {
    if (num <= 1){
    	return 0;
	}
	int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0){
        	return 0;
		}
    }
    return 1;
}

int main() {
    if (ESCOLHA == 0) {
        float nota1, nota2;
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Media: %s\n", NOTAS(nota1, nota2));
    } else if (ESCOLHA == 1) {
        int numero;
        printf("Digite um numero para verificar se eh primo: ");
        scanf("%d", &numero);
        printf("%s\n", PRIMO(numero));
    } else {
        printf("O valor de ESCOLHA deve ser 0 ou 1 apenas.\n");
    }

    return 0;
}

