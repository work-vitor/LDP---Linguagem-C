#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, soma, metade;
	
	printf("Digite um numero:");
	scanf("%f",&n1);
	
	printf("\nDigite outro numero:");
	scanf("%f",&n2);
	
	soma = n1+n2;
	metade = soma/2;
	
	printf("\nValor dos dois numeros somados: %.1f",soma);
	printf("\nMetade da soma dos dois numeros: %.1f",metade);
	return 0;
}
