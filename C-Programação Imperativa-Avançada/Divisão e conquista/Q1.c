#include <stdio.h>
#include <stdlib.h>


int multiplicar(int a, int b){
	if(b==1||a==1){
		return a*b;
	}else{
		return a + multiplicar(a,b-1);
	}
}
	
int main(){
	
	printf("%d", multiplicar(3,5));
	
	return 0;
}

