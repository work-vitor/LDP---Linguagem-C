#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int por;
	float litros, valor, desc;
	char combu[31];
	
	printf("Digite o tipo de combustivel A-alcool/G-gasolina:");
	scanf("%s",&combu);
	
	
	if(strcmp(combu, "A-alcool") == 0){
		printf("\nDigite a quantidade de alcool:");
		scanf("%f",&litros);
		
		if(litros <= 20){
			por = 3;
			valor = litros*2.90;
			desc = (valor*3)/100;
			valor = valor - desc;
			printf("\nAlcool");
		}
		if(litros > 20){
			por = 5;
			valor = litros*2.90;
			desc = (valor*5)/100;
			valor = valor - desc;
			printf("\nAlcool");
		}
	}
	if(strcmp(combu, "G-gasolina") == 0){
		printf("\nDigite a quantidade de gasolina:");
		scanf("%f",&litros);
		
		if(litros <= 20){
			por = 4;
			valor = litros*3.30;
			desc = (valor*4)/100;
			valor = valor - desc;
			printf("\nGasolina");
		}
		if(litros > 20){
			por = 6;
			valor = litros*3.30;
			desc = (valor*6)/100;
			valor = valor - desc;
			printf("\nGasolina");
		}
	}
	
	//Valor Final
	printf("\nValor total a pagar: R$%.2f - Desconto de %d",valor,por);
	return 0;
}
