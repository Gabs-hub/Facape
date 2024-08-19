struct vetor{
	int pontos[2];
};

typedef struct vetor Vetor;

void criar_ponto(Vetor *v);
float calc_coord(Vetor v1, Vetor v2);
