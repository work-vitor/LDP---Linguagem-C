#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	if((n1%2 == 0)){
		printf("\nO numero digitado e par!");
	}else{
		printf("\nO numero digitado e impar!");
	}
	return 0;
}
