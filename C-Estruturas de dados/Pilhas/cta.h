#define tam 100

struct pilha{
	int tamanho;
	char *itens;
	int topo;
};

typedef struct pilha Pilha;

void criarPilha(Pilha* p);
int vazia(Pilha p);
int cheia(Pilha p);
void push(Pilha* p, char item);
int pop(Pilha* p);

char* infix_para_posfix(Pilha*p, char* item);
float avaliar_posfixa(Pilha* p, char* posfixa);
