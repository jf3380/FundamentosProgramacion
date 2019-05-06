/* la tienda abcosmetics desea otorgar descuentos
del 50% sobre el valor del producto con etiqueta 
amarilla si y solo si la cedula del clinente termina 
en un numero par, en caso de terminar en un numero impar 
el descuento solo sera de 30%. */

#include <stdio.h>

int main(){

    int cedula, aux;       /* definimos nuestras variables*/
    float precio, total;
     
     printf (" cedula \n");     /* introducimos es digito celdula */
     scanf (" %d, &cedula");     /* leemos el valor*/

     aux = cedula % 10;    /* utilizamos nuestras variables*/
     cedula = cedula / 10;    
    
    printf ("\n el ultimo numero es %d\n", aux);    /* ultimo numero de cedula*/
     printf ("valor del producto");    /* valor del producto*/
     scanf ("%f, &precio");         /* leer valor*/

     if(aux % 2 == 0){                 /* utilizamos if y else para obtener el descuento*/

        printf(" el %d es par\n, aux");
        total = precio * 0.5;
        printf("su descuento es de %.2f, total");
     }
     else{
        
        total = precio * 0.3;
        printf("su decuento es de %.2f, total")

 }

return 0;





}