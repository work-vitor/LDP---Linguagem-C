#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Fa�a um programa que calcule a �rea de um tri�ngulo, considerando a f�rmula A = base . altura/2.
	Utilize as vari�veis AREA, BASE e ALTURA e os operadores aritm�ticos de multiplica��o e divis�o.*/
	
	float area, base, alt;
	
	printf("Digite a altura do triangulo:");
	scanf("%f",&alt);
	
	printf("\nDigite o valor da base:");
	scanf("%f",&base);
	
	area = (base*alt)/2;
	
	printf("\nO valora da area do triangulo: %.2f",area);
	return 0;
}
