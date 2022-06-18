/*La tienda Abcosmetics desea otorgar descuento
el 50% sobre el valor de un producto con etiqueta 
amarilla si y solo si, la cedula del cliente termina
en un numero par, en caso de terminar en un numero
impar el descuento solo sera del 30%*/

#include<stdio.h>

int main(){
	
	int cedula, aux;
	float precio, total;
	
    /*pedimos la cedula*/
	printf("Digite la cedula\n");
	/*leemos su valor*/
        scanf("%d",&cedula);
	
    /*inicializamos nuestras variables con determinados valores*/
	aux = cedula % 10;
	cedula = cedula / 10;
	
    /*obtuvimos nuestro digito final de la cedula*/
	printf("\nEl ultimo digito es %d\n",aux);
	/*pedimos el precio de el producto a comprar*/
        printf("Ingrese el valor del producto");
	/*leemos su valor*/
        scanf("%f",&precio);
	
    /*para obtener que tipo de descuento obtendremos, usaremos if y else*/
	if(aux % 2 == 0)
         {
              printf("El %d es par\n",aux);
              total = precio * 0.5;
	      printf("su descuento es de %.2f",total);
	    }
        else
        {
	      total = precio * 0.3;
	      printf("su descuento es de %.2f",total);
	    }
	
	
return 0;
}
