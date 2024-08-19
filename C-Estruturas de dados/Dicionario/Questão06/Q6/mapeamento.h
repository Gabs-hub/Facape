typedef struct no* Map; 
typedef char Chave[10];
typedef char Valor[30];

struct no{
	Chave chave;
	Valor valor;
	Map prox;
};

Map no_map(Chave c, Valor v, Map M);
void inserir(Chave c, Valor v, Map* M);
void exibe(Map M);
int remover(Chave c, Map *M);
int pertence(Chave c, Valor v, Map M);
