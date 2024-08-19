#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Codificar() {
    FILE *arq;
    FILE *arqc;
    int key=1;
    char nome[100];
    char name[100];
    char caractere;
    //OBS: A chave de codificação é o número "1".
    //ler o arquivo
    printf("Digite o nome do arquivo original (ex: exemplo.txt)\n");
    scanf("%s", nome);

    while (strstr(nome, ".txt") == NULL) {
        printf("FORMATO INCORRETO, TENTE NOVAMENTE (ex: exemplo.txt)\n");
        scanf("%s", nome);
    }

    arq = fopen(nome, "r");

    if (arq == NULL) {
        printf("ERRO, PROBLEMA AO ABRIR O ARQUIVO OU ARQUIVO INEXISTENTE\n");
        exit(0);
    }

    printf("Arquivo lido com sucesso\n");
    //fim da leitura
    
    //criar arquivo
    printf("Crie um nome para o arquivo codificado (ex: exemplo.txt)\n");
    scanf("%s", name);

    while (strstr(name, ".txt") == NULL) {
        printf("FORMATO INCORRETO, TENTE NOVAMENTE (ex: exemplo.txt)\n");
        scanf("%s", name);
    }

    arqc = fopen(name, "w");

    if (arqc == NULL) {
        printf("ERRO, PROBLEMA AO CRIAR O ARQUIVO\n");
        exit(0);
    }

    
    while ((caractere = fgetc(arq)) != EOF) {
        caractere += key;
        fputc(caractere, arqc);
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arqc);
    fclose(arq);
    //fim da criação
}

void Descodificar() {
    FILE *arq;
    FILE *arqd;
    int key=1;
    char nome[100];
    char name[100];
    char caractere;
    
    //ler arquivo
    printf("Digite o nome do arquivo codificado (ex: exemplo.txt)\n");
    scanf("%s", nome);

    while (strstr(nome, ".txt") == NULL) {
        printf("FORMATO INCORRETO, TENTE NOVAMENTE (ex: exemplo.txt)\n");
        scanf("%s", nome);
    }

    arq = fopen(nome, "r");

    if (arq == NULL) {
        printf("ERRO, PROBLEMA AO ABRIR O ARQUIVO OU ARQUIVO INEXISTENTE\n");
        exit(0);
    }

    printf("Arquivo lido com sucesso\n");
    //fim da leitura
    
    //criar arqivo
    printf("Crie um nome para o arquivo descodificado (ex: exemplo.txt)\n");
    scanf("%s", name);

    while (strstr(name, ".txt") == NULL) {
        printf("FORMATO INCORRETO, TENTE NOVAMENTE (ex: exemplo.txt)\n");
        scanf("%s", name);
    }

    arqd = fopen(name, "w");

    if (arqd == NULL) {
        printf("ERRO, PROBLEMA AO CRIAR O ARQUIVO\n");
        exit(0);
    }
    while ((caractere = fgetc(arq)) != EOF) {
        caractere -= key;
        fputc(caractere, arqd);
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arq);
    fclose(arqd);
    //fim da criação
}

int main() {
    int n;
    
    printf("========================================\n");
    printf("|BEM VINDO AO DECODIFICADOR DE ARQUIVOS|\n");
    printf("========================================\n");
    printf("|Gostaria de codificar ou descodificar?|\n");
    printf("|[0] Codificar                         |\n");
    printf("|[1] Descodificar                      |\n");
    printf("========================================\n");

    do {
        printf("Digite [0] ou [1]: ");
        scanf("%d", &n);
    } while(n != 0 && n != 1);

    if (n == 0) {
        Codificar();
    } else if (n == 1) {
        Descodificar();
    }

    return 0;
}

