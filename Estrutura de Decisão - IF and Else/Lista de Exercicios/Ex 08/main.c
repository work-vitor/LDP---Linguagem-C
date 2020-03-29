#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int codigo, nasc, ano_trab, atual;
	
	printf("Digite o ano atual:");
	scanf("%d",&atual);
	
	printf("\nDigite seu codigo de funcionario:");
	scanf("%d",&codigo);
	
	printf("\nDigite seu ano de nascimento:");
	scanf("%d",&nasc);
	
	printf("\nDigite seu ano de entrada na empresa:");
	scanf("%d",&ano_trab);
	
	nasc = atual - nasc;
	ano_trab = atual - ano_trab;
	
	if(nasc >= 65 ){
		printf("\nRequerer Aposentadoria!");
		return 0;
	}
	
	if(ano_trab >= 30){
		printf("\nRequerer Aposentadoria!");
		return 0;
	}
	
	if(nasc >= 60 && ano_trab >= 25){
		printf("\nRequerer Aposentadoria!");
		return 0;
	}
	
	else{
		printf("\nNao requerer!");
	}
	
	return 0;
}
