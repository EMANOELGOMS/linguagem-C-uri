#include<stdio.h>

int main(){
	int A, B, C, D, n;
	int cont;
	
	printf("Digite o valor de A:\n");
	scanf("%i", &A);
	
	cont = 0;	
	for(n = 0; n <= C; n++){
		if(C%n == 0){
			cont = cont * n;
		}
	printf("A eh multiplo de n %i\n", cont);
		
	}
	printf("####A eh multiplo de n %i\n", n);
	
	
	
	return 0;
}
