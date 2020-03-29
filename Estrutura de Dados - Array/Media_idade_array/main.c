#include <stdio.h>
#include <stdlib.h>

#define TAM 10 // constante

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade[TAM], i=0, soma=0;
	float media;
	
	for(i;i<TAM;i++){
		
		printf("Informe a idade %d:",i+1);
		scanf("%d",&idade[i]);
		soma = soma+idade[i];
		
	}
	media = (float)soma/TAM;// (float) = para forçar a conversão de int para float, pq a variavel soma é do tipo int!
	printf("\nMediad de idades: %.2f",media);
	return 0;
}
