#include <stdio.h>
#include <string.h>

struct conta {
    char nome[30];
    char cpf[12];
    float saldo;
};

typedef struct conta Conta;

void deposito(Conta *conta, float valor) {
    conta->saldo += valor;
    printf("Deposito realizado para %s. Saldo final: %.2f\n", conta->nome, conta->saldo);
}

void saque(Conta *conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque realizado para %s. Saldo final: %.2f\n", conta->nome, conta->saldo);
    } else {
        printf("Saldo insuficiente para saque.\n");
    }
}

int main() {
    Conta conta1;
    Conta conta2;
    Conta *pconta1 = &conta1;
    Conta *pconta2 = &conta2;

    printf("Digite o nome do titular da conta 1: ");
    scanf("%s", pconta1->nome);
    printf("Digite o CPF do titular da conta 1: ");
    scanf("%s", pconta1->cpf);
    printf("Digite o saldo da conta 1: ");
    scanf("%f", &pconta1->saldo);

    printf("\nDigite o nome do titular da conta 2: ");
    scanf("%s", pconta2->nome);
    printf("Digite o CPF do titular da conta 2: ");
    scanf("%s", pconta2->cpf);
    printf("Digite o saldo da conta 2: ");
    scanf("%f", &pconta2->saldo);
    
    int opcao;
    float valor;
    int conta_opcao;

    do {
        printf("\nEscolha uma operacao:\n");
        printf("1. Deposito\n");
        printf("2. Saque\n");
        printf("3. Escolher Conta\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                printf("Escolha a conta (1 ou 2): ");
                scanf("%d", &conta_opcao);
                if (conta_opcao == 1) {
                    deposito(pconta1, valor);
                } else if (conta_opcao == 2) {
                    deposito(pconta2, valor);
                } else {
                    printf("Conta invalida.\n");
                }
                break;
            case 2:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                printf("Escolha a conta (1 ou 2): ");
                scanf("%d", &conta_opcao);
                if (conta_opcao == 1) {
                    saque(pconta1, valor);
                } else if (conta_opcao == 2) {
                    saque(pconta2, valor);
                } else {
                    printf("Conta invalida.\n");
                }
                break;
            case 3:
                printf("Escolha a conta (1 ou 2): ");
                scanf("%d", &conta_opcao);
                if (conta_opcao != 1 && conta_opcao != 2) {
                    printf("Conta invalida.\n");
                }
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

