//INTERFACE

struct conta{
	int numero;
	char titular[30];
	float saldo;
};

typedef struct conta Conta;

void abrirConta(Conta* c);
void creditar(Conta* c, float valor);
void mostrarDados(Conta c);
void debitar(Conta* c, float valor);
