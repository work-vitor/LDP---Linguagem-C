#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, media;
	
	printf("Digite a nota1:");
	scanf("%f",&n1);
	
	
	printf("\nDigite a nota2:");
	scanf("%f",&n2);
	
	printf("\nDigite a nota3:");
	scanf("%f",&n3);
	
	printf("\nDigite a nota4:");
	scanf("%f",&n4);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("\nMedia: %f",media);
	
	if(media <= 4){
		printf("\nVoce foi reprovado!");
	}
	
	else if(media <7)
	{
		printf("\nVoce está de recuperacao!");
	}
	
	else
	{
		printf("\nVoce foi aprovado!");
	}
	
	return 0;
}
