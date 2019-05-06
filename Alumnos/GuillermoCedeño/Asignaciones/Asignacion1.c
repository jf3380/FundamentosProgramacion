/* 1) DETERMINAR SI UN NUMERO ES PAR O IMPAR EN 
CASO DE SER IMPAR DETERMINAR SI ES UN NUMERO PRIMO. */

#include<stdio.h>

int main(){
	int x,prim=0;	/* Establezco mis variables */
	char u_t = 163, a_t = 160; /* Le doy valores a mis variables caracter para utilizar tildes*/
	
	printf("Ingrese un n%cmero: ",u_t);
	scanf("%i",&x);
	int i = x;						/* Pido el valor de la variable x y se lo asigno a la variable i */
	
	if(x%2==0){
		printf("El n%cmero es par",u_t); /* Compruebo si el numero es par sabiendo si el resto de la division entre 2 es 0 */
	}
	else{							/* En caso de no ser par compruebo con un ciclo si tiene algun otro divisor ademas del 1 y de si mismo */
		while(i>0){
			if(x%i==0){
				prim = prim + 1;	
			}
			i--;					/* Mientras que voy acercando mi contador cada vez mas a 1 para finalizar el ciclo */
		}
		if(prim>2){					/* prim almacena los casos de valores que pueden dividir x */
			printf("El n%cmero es impar y no es un n%cmero primo",u_t,u_t); /* Si prim vale mas de 2, significa que es divisible entre mas numeros*/
		}
		else{
			printf("El n%cmero es impar y adem%cs es un n%cmero primo",u_t,a_t,u_t); /* Si prim vale 2, significa que es divisible entre si mismo y entre 1 */
		}
	}
	
	return 0;
}
