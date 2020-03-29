#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, n, d;
	
	i = 0;
	j = 10;
	n = 0;
	d = 10;
	
	//Incremento And Decremento = forma feia kkjjjjj
	while(i<10 && j>=0){
		i+=1;
		j-=1;
		printf("\nIncremento = I: %d\n",i);
		printf("\nDecremento = J: %d",j);
	}
	
	
	//Incremento And Decremento = forma bonita <3
	
	printf("\nIncremento - N = 0");
	while(n<10){
		n++;
		printf("\nIncremento bonito = N: %d",n);
	}
	
	printf("\nDecremento - D = 10");
	while(d>=0){
		d--;
		printf("\nDecremento bonito = D: %d",d);
	}
	
	return 0;
}
