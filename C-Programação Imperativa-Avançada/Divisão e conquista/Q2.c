#include <stdio.h>

double exponenciacao(double a, int n) {
    double an;
    if (n == 0) {
        return 1;
    } else {
        double aux = exponenciacao(a, n / 2);
        an = aux * aux;
        if (n % 2 == 1) {
            an = an * a;
        }
        return an;
    }
}

int main() {
    double base;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    double resultado = exponenciacao(base, expoente);

    printf("%.lf^%d = %.lf\n", base, expoente, resultado);

    return 0;
}

