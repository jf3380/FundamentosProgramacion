/*  ACTIVIDAD #1:
2) LEER UN VALOR POR TECLADO Y MOSTRAR POR PANTALLA
SI EL NUMERO ES MAYOR A 100 Y NO EXCEDE DE 300 DE
CUMPLIR CON ESTE RANGO SE PIDE MOSTRAR LOS NUMEROS
CONSECUTIVOS HASTA N NUMEROS ASCENDENTE.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor, cont=0;
    /* VARIABLES:
    valor: Siendo el número que va a ingresar el usuario
    cont: Siendo la variable que va a guardar y aumentar la cuenta de los números
    */

    printf("Ingrese el valor numerico deseado: ");// Se le pide al usuario que coloque un valor numerico
    scanf("%d", &valor);// Valor colocado

    if(valor > 100 && valor <= 300){
        // La función SI que valida el valor colocado si cumple la condición
        printf("\nValor aceptado\n");// Confirmación por pantalla
        system("pause");// Se pausa para luego empezar a contar
        for(cont = 1; cont <= valor; cont++){
            // La función PARA realiza un incremento desde 1 hasta el valor colocado y lo va mostrando
            printf("\n%d\n", cont);
        }  
    }else{
        // La función SINO muestra la situación contraria y se tendria que ejecutar de nuevo el programa
        printf("\nValor no aceptado, vuelva a ejecutar\n");
    }
    // Un mensaje de final y una pausa del código para verlo todo
    printf("\nHasta la proxima ejecucion (del programa)!!\n");
    system("pause");
    return 0;
}