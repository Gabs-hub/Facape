struct numeros{
	int vetor[2];
};

typedef struct numeros Numeros;

void adicionarNumeros(Numeros *n, int a, int b);
int somarNumeros(Numeros n);
int multiplicarNumeros(Numeros n);
const char* compararNumeros(Numeros n);
