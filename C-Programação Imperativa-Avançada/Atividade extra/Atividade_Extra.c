#include <stdio.h>
#include <stdlib.h>

int main() {
    float km1, km2, litros, preco, capacidade;
    float kms_rodados, consumo;

    printf("Informe a marcacao do odometro antes da viagem (Km1): ");
    scanf("%f", &km1);
    printf("Informe a marcacao do odometro apos a viagem (Km2): ");
    scanf("%f", &km2);
    while(km2<=km1){
    	printf("Erro, a quilometragem 2 nao poder ser menor ou igual a primeira\n");
    	printf("Informe novamente a marcacao do odometro apos a viagem (Km2): ");
    	scanf("%f", &km2);
	}
    printf("Informe o numero de litros de combustivel gastos: ");
    scanf("%f", &litros);
    printf("Informe o preco do litro de combustivel: ");
    scanf("%f", &preco);
    printf("Informe a capacidade do tanque: ");
    scanf("%f", &capacidade); //faz o que com isso? o senhor só pediu Km/litros

    kms_rodados = km2 - km1;
    consumo = kms_rodados / litros;

    printf("\nQuilometragem rodada: %.2f km\n", kms_rodados);
    printf("Consumo: %.2f km/l\n", consumo);

    return 0;
}

