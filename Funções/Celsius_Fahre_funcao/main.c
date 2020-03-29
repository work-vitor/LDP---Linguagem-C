#include <stdio.h>
#include <stdlib.h>

//Funcao para converter celsisus em fahrenheit
float celsiusFahre(float G){
	float FA;
	
	FA = (G*9/5)+32;
	
	return FA;
}

//Funcao para converter fahrenheit em celsius
float fahreCelsius(float G){
	float CE;
	
	CE = (G-32)*5/9;
	
	return CE;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	float TE;
	
	printf("Digite a temperatura:");
	scanf("%f",&TE);
	
	printf("\nDigite 1 para converter Celsius em fahrenheit e 2 para converter fahrenheit em celsius:");
	scanf("%d",&n);
	
	if(n==1){
		celsiusFahre(TE);
		printf("\n %.2f Celsius em Fahrenheit: %.2f",TE,celsiusFahre(TE));
	}else if(n==2){
		fahreCelsius(TE);
		printf("\n %.2f Fahrenheit em Celsius: %.2f",TE,fahreCelsius(TE));
	}
	else{
		printf("\nDigite uma opcao valida!!");
	}
	
	return 0;
}
