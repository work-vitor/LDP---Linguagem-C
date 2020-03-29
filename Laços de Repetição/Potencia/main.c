#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base, expo, c, pot=1;
	
	printf("Informe a base:");
	scanf("%d",&base);
	
	printf("\nInforme o expoente:");
	scanf("%d",&expo);
	
	if(expo == 0){
		printf("\nQualquer numero elevado a zero e igual a 1!!");
	}else{
		for(c=expo;c>0;c--){
			pot = pot*base;
		}
		printf("\nPotencia de %d elevado a %d = %d",base,expo,pot);
	}
	return 0;
}
