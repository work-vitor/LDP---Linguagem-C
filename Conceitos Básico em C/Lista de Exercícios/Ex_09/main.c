#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Faça um programa que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido.
	
	int n1, quad, cubo;
	
	printf("Digite um numero inteiro:");
	scanf("%d",&n1);
	
	quad = n1*n1;
	cubo = n1*n1*n1;
	
	printf("\nElevado ao quadrado: %d, Elevado ao cubo: %d",quad,cubo);
	return 0;
}
