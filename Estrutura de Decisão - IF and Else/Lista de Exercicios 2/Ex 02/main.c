#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf("Digite 4 numeros:");
	
	//Numero 1
	scanf("\n%d",&n1);
	//Numero 2
	scanf("%d",&n2);
	//Numero 3
	scanf("%d",&n3);
	//Numero 4
	scanf("%d",&n4);
	
	if(n1 > n2 && n1 > n3 && n1 > n4){
		soma = n2+n3+n4;
		printf("\nO primeiro numero digitado era o maior!");
	}
	else if(n2 > n1 && n2 > n3 && n2 > n4){
		soma = n1+n3+n4;
		printf("\nO segundo numero digitado era o maior!");
	}
	else if(n3 > n1 && n3 > n2 && n3 > n4){
		soma = n1+n2+n4;
		printf("\nO terceiro numero digitado era o maior!");
	}
	else{
		soma = n1+n2+n3;
		printf("\nO quarto numero digitado era o maior!");
	}
	
	printf("\nValor da soma dos menores numeros: %d",soma);
	
	return 0;
}
