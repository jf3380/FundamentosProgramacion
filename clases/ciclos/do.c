#include<stdio.h>

#define MAX 5


int main(){
	
	int i=0, opcion=0;

	/*
	do{
	   Bloue de codigo
	}while (condicion);
	*/

        do{
	  printf("Elige una opcion: \n\n");
          printf("[1] - Continuar. \n");
          printf("[2] - Salir. \n");
          scanf("%d", &opcion);
          printf("\n");
	}while(opcion == 1);
	printf("Fin del Programa, Buenas noches! \n");
	return 0;
}
