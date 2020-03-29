#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int g1, g2;
	char t1[19], t2[19];
	
	printf("Digite o nome do time 1:");
	scanf("%s",&t1);
	
	printf("\nDigite o total de gols do time 1:");
	scanf("%d",&g1);
	
	printf("\nDigite o nome do time 2:");
	scanf("%s",&t2);
	
	printf("\nDigite o total de gols do time 2:");
	scanf("%d",&g2);	
	
	if(g1 > g2){
		printf("\nO time %s ganhou!",t1);
	}
	
	if(g2 > g1){
		printf("\nO time %s ganhou!",t2);
	}
	if(g1 == g2){
		printf("\nHouve um empate!");
	}
	return 0;
}
