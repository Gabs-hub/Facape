#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar_arquivo() {
    char nome[50];
    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s", nome);
    FILE *arq = fopen(nome, "w");
    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }
    fclose(arq);
    printf("Arquivo criado com sucesso.\n");
}

void inserir_sobrescrever() {
    char nome[50];
    printf("Digite o nome do arquivo onde deseja inserir os dados: ");
    scanf("%s", nome);
    FILE *arq = fopen(nome, "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    printf("Digite os dados a serem inseridos:\n");
    char caractere;
    while ((caractere = getchar()) != '\n') 
        ;
    while ((caractere = getchar()) != EOF && caractere != '\n') {
        if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z') || caractere == ' ' || (caractere >= '0' && caractere <= '9')) {
            fputc(caractere, arq);
        }
    }
    fclose(arq);
    printf("Dados inseridos com sucesso.\n");
}

void inserir_acrescentar() {
    char nome[50];
    printf("Digite o nome do arquivo onde deseja inserir os dados: ");
    scanf("%s", nome);
    FILE *arq = fopen(nome, "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    printf("Digite os dados a serem inseridos:\n");
    char caractere;
    while ((caractere = getchar()) != '\n') 
        ;
    while ((caractere = getchar()) != EOF && caractere != '\n') {
        if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z') || caractere == ' ' || (caractere >= '0' && caractere <= '9')) {
            fputc(caractere, arq);
        }
    }
    fclose(arq);
    printf("Dados inseridos com sucesso.\n");
}

void exibir_arquivo() {
    char nome[50];
    printf("Digite o nome do arquivo que deseja exibir: ");
    scanf("%s", nome);
    FILE *arq = fopen(nome, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    char caractere;
    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arq)) != EOF) {
        printf("%c", caractere);
    }
    fclose(arq);
}

void excluir_arquivo() {
    char nome[50];
    printf("Digite o nome do arquivo que deseja excluir: ");
    scanf("%s", nome);
    if (remove(nome) != 0) {
        printf("Erro ao excluir o arquivo.\n");
        return;
    }
    printf("Arquivo excluído com sucesso.\n");
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1- Criar arquivo\n");
        printf("2- Inserir dados (sobrescrever)\n");
        printf("3- Inserir dados (acrescentar)\n");
        printf("4- Exibir conteudo do arquivo\n");
        printf("5- Excluir arquivo\n");
        printf("6- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                criar_arquivo();
                break;
            }
            case 2: {
                inserir_sobrescrever();
                break;
            }
            case 3: {
                inserir_acrescentar();
                break;
            }
            case 4: {
                exibir_arquivo();
                break;
            }
            case 5: {
                excluir_arquivo();
                break;
            }
            case 6: {
                printf("Saindo...\n");
                break;
            }
            default: {
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
            }
        }
    } while (opcao != 6);

    return 0;
}

