#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float maca, mora, valor, valor2, total, desc, kilo;
	
	printf("Digite total de kilos da maca:");
	scanf("%f",&maca);
	
	printf("Digite total de kilos do morango:");
	scanf("%f",&mora);
	
	if(maca <= 5 && mora <= 5){
		kilo = mora + maca;
		valor = maca * 1.80;
		valor2 = mora * 2.50;
		total = valor + valor2;
		
		printf("\nTotal a pagar: R$%.2f.",total);
		
		if(kilo > 8 || total > 25){
			desc = (total*10)/100;
			total = total - desc;
			printf("\nTotal a pagar com desconto: R$%.2f.",total);
		}
	}
	if(maca > 5 && mora >5){
		kilo = mora + maca;
		valor = maca * 1.50;
		valor2 = mora * 2.20;
		total = valor + valor2;
		
		printf("\nTotal a pagar: R$%.2f.",total);
		
		if(kilo > 8 || total > 25){
			desc = (total*10)/100;
			total = total - desc;
			printf("\nTotal a pagar com desconto: R$%.2f.",total);
		}
	}
	if(maca <= 5 && mora > 5){
		kilo = mora + maca;
		valor = maca * 1.80;
		valor2 = mora * 2.20;
		total = valor + valor2;
		
		printf("\nTotal a pagar: R$%.2f.",total);
		
		if(kilo > 8 || total > 25){
			desc = (total*10)/100;
			total = total - desc;
			printf("\nTotal a pagar com desconto: R$%.2f.",total);
		}
	}
	if(mora <=5 && maca > 5){
		kilo = mora + maca;
		valor = maca * 1.50;
		valor2 = mora * 2.50;
		total = valor + valor2;
		
		printf("\nTotal a pagar: R$%.2f.",total);
		
		if(kilo > 8 || total > 25){
			desc = (total*10)/100;
			total = total - desc;
			printf("\nTotal a pagar com desconto: R$%.2f.",total);
		}
	}
	return 0;
}
