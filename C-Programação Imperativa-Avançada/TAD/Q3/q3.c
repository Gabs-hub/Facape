#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

void adicionarNumeros(Numeros *n, int a, int b){
	n->vetor[0] = a;
	n->vetor[1] = b;
}

int somarNumeros(Numeros n){
	int a,b;
	a = n.vetor[0];
	b = n.vetor[1];
	return a + b;
}
int multiplicarNumeros(Numeros n){
	int a,b;
	a = n.vetor[0];
	b = n.vetor[1];
	return a*b;
}
const char* compararNumeros(Numeros n){
	int a,b;
	a = n.vetor[0];
	b = n.vetor[1];
	if(a==b){
		return "SIM";
	}else{
		return "NAO";
	}
}
