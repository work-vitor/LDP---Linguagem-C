#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,tabuada, c=0;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	while(c<=10){
		//tabuada = n*c;
		//printf("\n%d X %d = %d",n,c,tabuada);
		printf("\n%d X %d = %d",n,c,n*c);
		c++;
	}
	return 0;
}
