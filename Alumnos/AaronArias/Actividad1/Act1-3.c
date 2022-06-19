/*  ACTIVIDAD #1:
3) LA TIENDA ABCOSMETICS DESEA OTORGAR DESCUENTOS
DEL 50% SOBRE EL VALOR DE UN PRODUCTO CON ETIQUETA
AMARILLA SI Y SOLO SI LA CEDULA DEL CLIENTE TERMINA
EN UN NUMERO PAR, EN CASO DE TERMINAR EN UN NUMERO
IMPAR EL DESCUENTO SOLO SERA DEL 30%
*/
#include<stdio.h>
#include<stdlib.h>

#define desc50 0.5
#define desc30 0.3
// Se define los descuentos para agilizar el código

int main(){
    int cedula, evaluar=0;
    float valor=0, total=0;
    /* VARIABLES
    cedula: Siendo el número de cédula que va a ingresar el usuario
    evaluar: Siendo el que va a guardar el residuo de la división de la cédula
    valor: Siendo el precio del producto que eligío el usuario
    total: Siendo el que va a guardar el resultado del producto con su descuento ya agregado
    */

    printf ("Ingrese el valor de un producto: ");// Valor del producto elegido por el usuario
    scanf ("%f", &valor);// Valor colocado/
    printf ("\nPor favor, ingrese su cedula para saber su descuento: ");// Cédula colocada por el usuario
    scanf ("%d", &cedula);//Cédula colocada

    evaluar = cedula % 10;// Se divide la cédula entre 10 para saber si el residuo es par o impar
    
    if(evaluar % 2 == 0){
        // La función SI que va a realizar el descuento del 50% al producto
        printf("\nSu cedula le otorga un 50 por ciento de descuento.\n", evaluar);// Se confirma el descuento del usuario
        total = valor * desc50;
        printf("Su descuento es de %.3f\n", total);// Se muestra el descuento a efectuar con tres cifras decimales
    }else{
        // La función SINO que va a realizar el descuento del 30% al producto
        printf("\nSu cedula le otorga un 30 por ciento de descuento.\n");// Se confirma el descuento del usuario
        total = valor * desc30;
        printf("Su descuento es de %.3f\n", total);// Se muestra el descuento a efectuar con tres cifras decimales
    }
    // Un mensaje de final y una pausa del código para verlo todo
    printf("\nHasta la proxima ejecucion (del programa)!!\n");
    system("pause");
    return 0;
}