#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("Qual a sua idade:");
	scanf("%d",&idade);
	
	if(idade >= 18){
		
		printf("\nMaior de idade!!");
		
	}else{
		printf("Menor de idade!");
	}
	return 0;
}
