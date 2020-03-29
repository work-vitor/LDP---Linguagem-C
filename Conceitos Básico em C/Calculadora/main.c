#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Declarando variaveis
	float n1, n2, soma, sub, multi, div;
	
	//Entrada de Dados
	printf("Informe o valor 1:");
	scanf("%f",&n1);
	
	printf("\nInforme o valor 2:");
	scanf("%f",&n2);
	
	//Soma
	soma = n1 + n2;
	printf("\nA soma e: %f",soma);
	
	//Subtração
	
	sub = n1/n2;
	printf("\nA subtração e: %f",sub);
	
	//Multiplicação
	multi = n1*n2;
	printf("\nA multiplicação e: %f",multi);
	
	//Divisão
	div = n1/n2;
	printf("\nA divisão e: %f",div);
	
	return 0;
}
