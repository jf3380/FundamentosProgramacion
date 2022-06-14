/* leer el valor por teclado y mostrar por pantalla
si el numero es mayor a 100 y no excede de 300, de 
cumplir con este rango, se pide mostrar los numeros
consecutivos hasta n numeros ascendentes*/

#include<stdio.h>

int main(){
	int n,i;
	
	printf("Digite un numero: \n");
	scanf("%d",&n);
	
		if((n>100)&&(n<=300)){
			printf("\nEsta dentro de los parametros");
			for(i=1;i<=n;i++){
				printf("%d\n",i);
			}
		}else{
			printf("\nno esta dentron de los parametros");
			printf("\nDigite otro numero")
		}
	
	return 0;
} 
