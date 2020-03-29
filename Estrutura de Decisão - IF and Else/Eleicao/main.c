#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	int idade, voto;
	
	printf("Informe sua idade:");
	scanf("%d",&idade);
	
	if(idade >= 0 && idade<=15){
		printf("\nVoce nao pode votar!");
	}
	else if(idade < 18 || idade > 65){
		printf("\nEleitor optante!");
	}
	else if(idade >=18 && idade<= 65){
		printf("\nEleitor obrigatorio!");
	}
	
	return 0;
}
