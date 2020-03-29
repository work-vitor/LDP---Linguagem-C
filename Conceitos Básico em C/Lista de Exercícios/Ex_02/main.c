#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade
	dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/
	
	int ano, mes, dia, dias;
	
	printf("Digite sua idade:");
	scanf("%d",&ano);
	
	printf("\nDigite o total de meses:");
	scanf("%d",&mes);
	
	printf("\nDigite o total de dias:");
	scanf("%d",&dia);
	
	dias = (ano*365) + (mes*30) + dia;
	
	printf("\nSua idade total expressa em dias: %d",dias);
	return 0;
}
