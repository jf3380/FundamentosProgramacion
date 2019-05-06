/* 3) LA TIENDA ABCOSMETICS DESEA OTORGAR DESCUENTOS DEL 50% SOBRE 
EL VALOR DE UN PRODUCTO CON ETIQUETA AMARILLA SI Y SOLO SI LA CEDULA 
DEL CLIENTE TERMINA EN UN NUMERO PAR, EN CASO DE TERMINAR EN UN NUMERO 
IMPAR EL DESCUENTO SOLO SERA DEL 30% */

#include<stdio.h>

#define DES_PAR 0.50
#define DES_IMPAR 0.30

int main(){
	int valor,ced,ced_aux,valor_final;	/* Establezco mis variables */
	char u_t = 163, e_t = 130; /* Le doy valores a mis variables caracter para utilizar tildes*/
	
	
	printf("\tBienvenido a la tienda de ABCosmetics \n");	/* Pido datos al usuario como es costumbre*/
	printf("\nIngrese el valor del producto: "); scanf("%i",&valor);
	printf("\nIngrese el n%cmero de c%cdula: ",u_t,e_t); scanf("%i",&ced);
	
	ced_aux = ced % 10;	/* Separo el último número de la cédula antes de comprobar si es par */
	
	
	if(ced_aux%2==0){	/* Compruebo si el ultimo número de la cédula es par con un mod */
		valor_final = valor - valor*DES_PAR;
	}											/* Dependiendo del resultado le asigno un descuento u otro al valor final*/
	else{
		valor_final = valor - valor*DES_IMPAR;
	}
							/* Imprimo el valor final con el descuento apropiado aplicado */
	printf("El valor final del producto es: $%i",valor_final);
	
	return 0;
}
