  /*LEER UN VALOR POR TECLADO Y MOSTRAR POR PANTALLA SI EL NUMERO ES MAYOR A 100 Y 
 NO EXCEDE DE 300 DE CUMPLIR CON ESTE RANGO SE PIDE MOSTRAR LOS NUMEROS CONSECUTIVOS 
 HASTA N NUMEROS ASCENDENTE*/

#include <stdio.h>
#include <conio.h>
 int main()
 {
    /*declaracion de variables*/
    int n,i;
    /*pedimos que ingrese los datos por pantalla*/
    printf("ingrese un numero mayor que 100 y menor o igual a 300:\n");
    scanf("%d",&n);
    /*establecemos la condicion de que el numero sea mayor que 100 y sea menor o igual a 300*/
    if(n>100 && n<=300){
      printf("\n El numero cumple con los parametros\n");
  
      for(i=1;i<=n;i++)
      {
          printf("%d ",i);
      }
       
      
    }/*si no se cumple la condicion*/
    else{
    printf("el numero no cumple con los parametros");
    }
    

    return 0;
  }