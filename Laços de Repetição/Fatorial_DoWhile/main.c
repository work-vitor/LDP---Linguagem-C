#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, fat=1;
	
	printf("Digite o fatorial:");
	scanf("%d",&n);
	
	if(n<1){
		printf("\nFatorial de 0 e 1 = 1");
	}else{
		
		do{
			fat = fat*n;
			n--;
		}while(n>1);
		printf("\nFatorial: %d",fat);
	}
	return 0;
}
