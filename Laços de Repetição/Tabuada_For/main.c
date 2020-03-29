#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, c = 0;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	for(c; c<=10; c++){
		printf("\n%d X %d = %d",n,c,n*c);
	}
	return 0;
}
