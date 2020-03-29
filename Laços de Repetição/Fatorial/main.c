#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, c=1, f=1;
	
	printf("Digite o fatorial:");
	scanf("%d",&n);
	
	if(n==0){
		printf("\nFatorial de 0! = 1");
	}
	else{
		while(c<=n){
			f = f*c;
			c++;
			printf("\nFatorial: %d\n", f);
		}
	}
	return 0;
}
