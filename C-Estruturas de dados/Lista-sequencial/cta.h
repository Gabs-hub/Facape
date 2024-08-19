
struct lista{
	int *itens;
	int tamanho;
	int fim;
};
typedef struct lista Lista;

void criarLista(Lista* L, int tamanho);
int vazia(Lista L);
int cheia(Lista L);
void mostrarPosicao(Lista L, int posicao);
void mostrarElemento(Lista L, int elemento);
void limpar(Lista *L);

