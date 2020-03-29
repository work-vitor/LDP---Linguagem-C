#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h1,h2,m1,m2,s1,s2;
	printf("Digite a idade do primeiro homem:");
	scanf("%d",&h1);
	
	printf("Digite a idade do segundo homem:");
	scanf("%d",&h2);
	
	printf("Digite a idade da primeira mulher:");
	scanf("%d",&m1);
	
	printf("Digite a idade da segunda mulher:");
	scanf("%d",&m2);
	
	if(h1 != h2 && m1 != m2){
		
		if(h1> h2 && m1 > m2){
			s1 = h1 + m2;
			s2 = h2 + m1;
			printf("\nHomem mais velho com a mais nova: %d.",s1);
			printf("\nMulher mais velha com o mais novo: %d.",s2);
		}
		if(h2> h1 && m2 > m1){
			s1 = h1 + m2;
			s2 = h2 + m1;
			printf("\nHomem mais velho com a mais nova: %d.",s2);
			printf("\nMulher mais velha com o mais novo: %d.",s1);
		}
		if(h1> h2 && m2 > m1){
			s1 = h1 + m1;
			s2 = h2 + m2;
			printf("\nHomem mais velho com a mais nova: %d.",s1);
			printf("\nMulher mais velha com o mais novo: %d.",s2);
		}
		if(h2> h1 && m1 > m2){
			s1 = h1 + m1;
			s2 = h2 + m2;
			printf("\nHomem mais velho com a mais nova: %d.",s1);
			printf("\nMulher mais velha com o mais novo: %d.",s2);
		}
	}
	else{
		printf("Informe idade diferentes!");
	}
	return 0;
}
