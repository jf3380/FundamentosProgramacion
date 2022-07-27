/* determinar si un numero es par o impar,
en caso de ser impar determinar si es un numero 
primo*/
#include <stdio.h>

int main()

{
 /*estableciendo variables*/
    int n,i=1,contador=0;
  /*inicio */
    printf("Ingresa un numero:\n");

    scanf("%i",&n);
  /*estableciendo condicionar para saber si el numero es par o impar*/
    if (n % 2 == 0){

        printf("El numero es par\n");

       }

    else{

        printf("El numero  es impar\n");
        /*si no es par establecemos la condicion para saber si es un numero primo*/
         
         while (i <= n)

        {
         /*si el modulo del numero es igual a cero se le agrega uno a la cariable contador*/
        if (n % i == 0){

            contador++;

        }

        i++;

       }
        /*establecemos una segunda condicion que va a escribir que es primo si el contador es igual a dos*/
       if (contador == 2){

        printf("El numero es primo");

        }

        else{

         printf("El numero no es primo");

        }

    }
   
    return 0;
 
}