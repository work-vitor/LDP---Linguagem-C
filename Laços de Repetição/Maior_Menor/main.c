#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, maior = 0, menor = 999999;
	printf("Para parar o ciclo informe um numero negativo!");
	do{
		printf("\nDigite um numero:");
		scanf("%d",&n);
		if(n<menor && n>=0){
			menor = n;
		}
		if(n>maior){
			maior = n;
		}
	}while(n>0);
	printf("\nMaior numero digitado: %d",maior);
	printf("\nMenor numero digitado: %d",menor);
	return 0;
}
