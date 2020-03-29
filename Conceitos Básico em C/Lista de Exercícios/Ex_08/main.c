#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float HT, VH, PD, SB, DES, SL;
	
	printf("Digite total de horas tranalhadas no mes:");
	scanf("%f",&HT);
	
	printf("\nValor por hora trabalhada:");
	scanf("%f",&VH);
	
	printf("\nValor do percentual de desconto:");
	scanf("%f",&PD);
	
	SB = HT*VH;
	
	DES = (SB*PD)/100;
	
	SL = SB - DES;
	
	printf("\nSalario Bruto: R$%.2f, Valor descontado: R$%.2f, Salario liquido: R$%.2f",SB,DES,SL);
	
	return 0;
}
