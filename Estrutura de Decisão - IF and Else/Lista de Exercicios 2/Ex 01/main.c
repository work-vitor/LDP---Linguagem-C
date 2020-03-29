#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	if(n1%5 == 0 && n1%3 == 0){
		printf("\nO numero e divisivel por 5 e 3!");
	}else{
		printf("\nO numero nao e divisivel por 5 e 3!");
	}
	return 0;
}
