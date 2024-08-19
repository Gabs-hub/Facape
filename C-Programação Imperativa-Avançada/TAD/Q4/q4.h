struct socios{
	char nome[30];
	int idade;
	int matricula;
	char civil[20];
	char turno[10];
};

typedef struct socios Socios;

void lerSocios(Socios **socios, int *i, float *renda);
int tamanho(Socios s);
void rendaCasados(Socios s);


