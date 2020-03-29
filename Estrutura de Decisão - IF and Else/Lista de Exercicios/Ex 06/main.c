#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2;
	
	//N1
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	//N2
	printf("Digite um numero:");
	scanf("%d",&n2);
	
	if(n1 == n2){
		printf("\nOs numeros sao iguais");
	}
	if(n1 > n2){
		printf("\nO primeiro numero e maior!");
	}
	if(n2>n1){
		printf("\nO segundo numero e maior!");
	}
	
	return 0;
}
