/*leer el valor por teclado y mostrar por pantalla
si el numero es mayor a 100 y no excede de 300 de 
cumplir con este rango se pide mostrar los numeros
consecutivos hasta n numeros ascendentes*/

#include<stdio.h>

int main(){
	int numero,i;
	
	printf("Digite un numero: \n");
    /*pedimo el numero para empezar a leer*/
	scanf("%d",&numero);
    /*leemos el numero para obtener sus valores*/
	
    /*al necesitar 2 respuestas distintas usamos if y else*/
		if((n>100)&&(n<=300)){
			printf("\nEsta dentro de los parametros");
			for(i=1;i<=n;i++){
				printf("%d\n",i);
			}
		}else{
			printf("no esta dentro de los parametros\n");
			printf("Digite otro numero")
		}
	
	return 0;
} 