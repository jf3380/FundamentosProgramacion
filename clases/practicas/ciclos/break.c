#include<stdio.h>

#define MAX 10

int main(){
	int i, contador=0, sumatoria=0;
	
	for(i=0;i<MAX;i++){
	    printf("Numero %d \n", i);
            contador = contador + 1;
	    sumatoria = sumatoria + i;

	    if(i==3){
		printf("i es igual a 3 se rompe el ciclo \n");
                break;
            }

            printf("La cantidad de ejecuciones fue de %d \n", contador);
            printf("La suma de los valores de i es %d \n", sumatoria);
	}

	return 0;
}

