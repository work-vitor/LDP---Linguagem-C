#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Escreva um programa para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste.
	Calcular e escrever o valor do novo sal�rio.*/
	
	float sal, real, novo_sal, re;
	
	printf("Digite o valor do seu salario atual:");
	scanf("%f",&sal);
	
	printf("\nDigite o valor do reajuste:");
	scanf("%f",&real);
	
	re = (sal*real)/100;
	novo_sal = sal+re;
	
	printf("\nO valor do novo salario: %.2f",novo_sal);
	return 0;
}
