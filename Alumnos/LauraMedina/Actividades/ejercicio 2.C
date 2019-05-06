/* Leer un valor por teclado y mostar por pantalla
si el nuemro es mayor a 100 y no excede de 300 de cumplir
con este rango se pide mostrar los numeros consecutivos 
hasta n numero ascendente*/

#include < stdio.h >

int principal (){
        int n,i;         /* establesco mis variables */

        printf ( " Digite un numero : \n ");    /* establecemos un numero */
        scanf  (" %d " , &n);                   /* leemos el numero*/

              if ((n> 100)&&(n<= 300)) {
                    printf ( "\n Esta dentro de los condiciones")
                    for (i= 1; i<=n; i++){
                        printf (" %d \n" ,i);
                    }

              }else{
                     printf ( "\n no esta dentro de las condiciones")
                     printf( "\n digita otro numero")
              }


return 0;



}