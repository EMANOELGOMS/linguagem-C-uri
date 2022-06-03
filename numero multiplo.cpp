#include <stdio.h>

int main(void){
	
	
int i,n;

printf("Informe um numero inteiro\n");
scanf ("%i",&n);

for (i=0;i<=n;i++){
	
	if(n%i==0){
		printf("\n %i -numero multiplo de\n", i);
	}
	if(n%i==0){
		printf("\n %i -numero multiplo de\n", i);
	}
	else{
		printf("\n %i nao e multiplo de\n", i);
	}
	
}
	
	
	return 0;
}
