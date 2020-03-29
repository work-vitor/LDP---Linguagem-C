#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Faça um programa que leia dois números nas variáveis Val1 e Val2, calcule sua média na variável Media e imprima seu valor.
	
	float v1, v2, media;
	
	printf("Digite o primeiro valor:");
	scanf("%f",&v1);
	
	printf("\nDigite o segundo valor:");
	scanf("%f",&v2);
	
	media = (v1+v2)/2;
	
	printf("\nMedia dos valores digitados: %.2f.",media);
	return 0;
}
