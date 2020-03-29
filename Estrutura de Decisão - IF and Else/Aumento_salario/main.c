#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, novo_sal;
	int porc, visu;
	
	printf("Digite o valor do seu salario:");
	scanf("%f",&sal);
	
	//Auemnto de 15%
	if(sal <= 1031  ){
	
	visu = 15;	
	porc = (sal*15)	/100;
	novo_sal = sal + porc;
	}
	
	
	if(sal > 1031 &&  sal <2500){
		visu = 10;	
		porc = (sal*10)/100;
		novo_sal = sal + porc;
	}
	
	if(sal >= 2500){
		visu = 5;
		porc = (sal*5)/100;
		novo_sal = sal + porc;
	}
	printf("\nNovo salario: R$%.2f - Aumento de %d.",novo_sal,visu);
	return 0;
}
