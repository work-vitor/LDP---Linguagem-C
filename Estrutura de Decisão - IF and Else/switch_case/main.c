#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia;
	
	printf("Qual dia da semana:");
	scanf("%d",&dia);
	
	switch(dia){
		case 1:
			printf("\nDomingo");
			break;
			
		case 2:
			printf("\nSegunda");
			break;
		
		case 3:
			printf("\nTerca");
			break;
			
		case 4:
			printf("\nQuarta");
			break;
			
		case 5:
			printf("\nQuinta");
			break;
			
		case 6:
			printf("\nSexta");
			break;
			
		case 7:
			printf("\nSabado");
			break;
	}
	return 0;
}
