#include <stdio.h>

int main() {
    int a, b, result;
    int *pa, *pb, *presult;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    result = (*pa) * (*pb);

    presult = &result;

    printf("\n%d x %d = %d\n\n", *pa, *pb, *presult);

    printf("Endereco de a: %p\n", pa);
    printf("Endereco de b: %p\n\n", pb);
    printf("Endereco de pa: %p\n", &pa);
    printf("Endereco de pb: %p\n\n", &pb);
    printf("Endereco de result: %p\n", presult);
    printf("Endereco de presult: %p\n", &presult);

    return 0;
}

