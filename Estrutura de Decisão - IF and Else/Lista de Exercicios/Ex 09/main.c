#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, me, mf;
	
	printf("Digite a primeira nota:");
	scanf("%f",&n1);
	
	printf("Digite a segunda nota:");
	scanf("%f",&n2);
	
	printf("Digite a terceira nota:");
	scanf("%f",&n3);
	
	printf("Digite a media de exercicios:");
	scanf("%f",&me);
	
	mf = (n1+(n2*2)+(n3*3)+me)/7;
	
	if(mf >= 9){
		printf("\nSeu conceito foi: A");
	}
	
	if(mf >= 7.5 && mf <9){
		printf("\nSeu conceito foi: B");
	}
	
	if(mf >= 6 && mf <7.5){
		printf("\nSeu conceito foi: C");
	}
	
	if(mf < 6){
		printf("\nSeu conceito foi: D");
	}
	
	return 0;
}
