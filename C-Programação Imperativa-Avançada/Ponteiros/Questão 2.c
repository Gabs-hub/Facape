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
    
    if(*pa>*pb){
    	printf("%d > %d",*pa,*pb);
	}else if(*pb>*pa){
		printf("%d > %d",*pb,*pa);
	}else if(*pb==*pa){
		printf("%d = %d",*pb,*pa);
	}

    return 0;
}

