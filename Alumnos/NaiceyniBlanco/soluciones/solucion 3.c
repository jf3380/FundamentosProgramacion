/*la tienda ABCOSMETICS, desea otorgar descuento
el 50% sobre el valor de un producto con etiqueta 
amarilla si y solo si, la cedula del cliente termina
en un numero par, en caso de terminar en un numero
impar, el descuento solo sera del 30%...*/

#include<stdio.h>

int main(){
	
	int ced, aux;
	float precio, total;
	
	printf("\t\nTIENDAS ABCOSMETICS.\n");
	printf("Digite la cedula\n");
	sacnf("%d",&ced);
	
	aux = ced % 10;
	ced = ced / 10;
	
	printf("\nEl ultimo digito es %d\n",aux);
	printf("Ingrese el valor del producto: ");
	sacanf("%f",&precio);
	
	if(aux % 2 == 0){
		printf("\nEl %d es par\n",aux);
			total = precio * 0.5;
		printf("su descuento es de %.2f",total);
	}else{
		total = precio * 0.3;
		printf("su descuento es de %.2f",total);
	}
	
	
return 0;
}
