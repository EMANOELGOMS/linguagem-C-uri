#include <stdio.h>
#include <math.h>

main(){

	double n, raio;
	n = 3.14159;
	scanf("%lf", &raio);
	
	double area;
	area = n * (raio*raio);
	
	printf("A=%.4lf\n",area);
	
	
	
	return 0;
}
