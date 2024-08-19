#include <stdio.h>
#include "lista_encadeada.h"

int main() {
    Lista lista;
    inicializarLista(&lista);

    inserirElemento(&lista, 10);
    inserirElemento(&lista, 20);
    inserirElemento(&lista, 30);

    imprimirLista(lista);

    liberarLista(&lista);

    return 0;
}

