#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1;
	double n2;
	float n3;
	
	//scanf("%d",&n1);
	
	//Precisa de um print e scanf para receber o valor, %d para valorers inteiros
	printf("Digite um valor para variavel n1:");
	scanf("%d",&n1);
	
	printf("\n%d",n1);
	
	//%lf para valores do tipo double
	
	printf("\nDigite um valor para variavel n2:");
	scanf("%lf",&n2);
	
	printf("\n%f",n2);
	
	//%f para valores do tipo float
	printf("\nDigite um valor para variavel n3:");
	scanf("%f",&n3);
	
	printf("\n%f",n3);
	
	return 0;
}
