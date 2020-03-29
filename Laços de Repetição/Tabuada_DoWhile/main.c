#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, cont = 0;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	do{
		printf("\n %d X %d = %d",n,cont,n*cont);
		cont++;
	}while(cont<=10);
	return 0;
}
