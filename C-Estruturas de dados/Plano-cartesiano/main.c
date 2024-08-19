#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cta.h"

int main() {
	
	srand(time(NULL));
	
	Vetor pontoA;
    criar_ponto(&pontoA);
    
    Vetor pontoB;
    criar_ponto(&pontoB);
    
    calc_coord(pontoA, pontoB);
    
	return 0;
}
