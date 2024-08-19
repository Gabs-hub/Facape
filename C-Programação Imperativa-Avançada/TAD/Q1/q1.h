struct aluno {
	char nome[81];
	char matricula[8];
	char turma;
	float p1;
	float p2;
	float p3; 
};

typedef struct aluno Aluno;

void cadastro(Aluno *A, const char *nome, const char *matricula);
void media(Aluno *A, float p1, float p2);
void mostrar(Aluno A);
