#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Escreva um programa para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.
	
	float base, alt, area;
	
	printf("Digite o valor da base:");
	scanf("%f",&base);
	
	printf("\nDigite a altura:");
	scanf("%f",&alt);
	
	area = base*alt;
	
	printf("\nO area do retangulo: %.2f.",area);
	
	return 0;
}
