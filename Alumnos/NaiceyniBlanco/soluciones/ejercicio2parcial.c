#include<stdio.h>
#include<string.h>
#define PORC 0.3
#define MAX 5
#define MIN 10.000
#define MAXI 50.000

int main(){
	int ced,num=0,acum=0,dig=0,i;
	char c,nombre[20],apellido[20];
	float costo=0,aux=0,desc_costo=0;

	printf("\ningresae etiqueta m o a: ");
	scanf("%c",&c);
	printf("\ningresar cedula: ");
	scanf("%i",&ced);
	printf("\ningresar nombre: ");
	scanf("%s",nombre);
	printf("\ningresar apellido: ");
	scanf("%s",apellido);
	printf("\ningrese la cantidad de producto: ");
	scanf("%i",&num);
	
	if((c == 'm')||(c == 's')){
		acum = ced / 10;
		dig = ced % 10;
	
	
		if(dig%2==0){
			printf("\tEmpresa TOYLANDIA");
			printf("Bienvenido a su promocion");
		}else{
			printf("\nno participaen el concurso");
		}


			if(num <= MAX){
				for(i=1;i<=num;i++){
					printf("\ningresar el precio ");
					scanf("%f",&costo);
					aux += costo;
				}
				printf("\nTotal de la compra: %.2f",aux);
				
				if((aux==MIN)||(aux==MAXI)){
					desc_costo = aux * PORC;
					printf("\n\tDatos de la compra Empresa TOYLANDIA ");
					printf("\n\tNombre %s\n\tApellido %s ",nombre,apellido);
					printf("\n\tCantidad de articulos %i ",num);
					printf("\n\tMonto total %.2f ",aux);
					printf("\n\tDescuento final %.2f ",desc_costo);
				}else{
					printf("\nNo cumple para participar");
				}
			}else{
				printf("\nsolo 5 articulos");
			}
	}else{
		printf("\nNo cumple los parametros");
}


	return 0;
}
