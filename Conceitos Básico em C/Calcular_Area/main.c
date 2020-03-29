#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Area = pi * r
	
	float area, PI = 3.14, raio;
	
	printf("Informe o valor do raio:");
	scanf("%f",&raio);
	
	area = PI * (raio*raio);
	
	printf("A area e: %.2f",area);
	
	return 0;
}
