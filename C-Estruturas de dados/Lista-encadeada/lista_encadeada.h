#define fmt "%d " // formato de exibicao dos itens

typedef int Item; // tipo dos itens na lista

typedef struct no { // estrutura dos nos da lista
    Item item;
    struct no *prox;
} *Lista; // tipo de ponteiro para lista

Lista no(Item x, Lista p);

void inicializarLista(Lista *lista);
int listaVazia(Lista lista);
void inserirElemento(Lista *lista, Item elemento);
void imprimirLista(Lista lista);
void liberarLista(Lista *lista);

