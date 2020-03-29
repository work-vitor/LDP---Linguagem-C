#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Inicialização de vetores
	int my_array[100]={5,1};
	
	int i = 0;
	
	
	/*printf("my_array[0]=%d",my_array[0]);
	printf("\nmy_array[1]=%d",my_array[1]);*/
	
	for(i;i<100;i++){
		printf("\nmy_array[%d] = %d",i+1,my_array[i]);
	}
	
	return 0;
}
