#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Faça um programa que calcule a área de um triângulo, considerando a fórmula A = base . altura/2.
	Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.*/
	
	float area, base, alt;
	
	printf("Digite a altura do triangulo:");
	scanf("%f",&alt);
	
	printf("\nDigite o valor da base:");
	scanf("%f",&base);
	
	area = (base*alt)/2;
	
	printf("\nO valora da area do triangulo: %.2f",area);
	return 0;
}
