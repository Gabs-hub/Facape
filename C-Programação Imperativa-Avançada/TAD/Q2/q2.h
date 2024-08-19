struct produto{
	int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

typedef struct produto Produto;

void adicionarProdutos(Produto *P);
void mostrarProdutos(Produto P);




