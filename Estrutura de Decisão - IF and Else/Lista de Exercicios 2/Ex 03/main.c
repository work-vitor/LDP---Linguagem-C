#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Digite um numero:");
	scanf("%d",&x);
	
	if(x<1){
		y = x;
		printf("\nImprimindo y: %d",y);
	}
	else if(x == 1){
		y = 0;
		printf("\nImprimindo y: %d",y);
	}
	else if(x>1){
		y = x*x;
		printf("\nImprimindo y: %d",y);
	}
	return 0;
}
