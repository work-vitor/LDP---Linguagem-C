#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char p1[31],p2[31];
	
	printf("Diigte uma palavra:");
	scanf("%s",&p1);
	
	printf("\nDigite uma palavra:");
	scanf("%s",&p2);
	
	if(strcmp(p1, "ok") == 0){
		printf("\nIguais");
	}else{
		printf("\nDiferente");
	}
	return 0;
}
