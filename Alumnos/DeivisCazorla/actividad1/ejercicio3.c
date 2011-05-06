/*3) LA TIENDA ABCOSMETICS DESEA OTORGAR DESCUENTOS DEL 50% SOBRE EL VALOR DE UN PRODUCTO
 CON ETIQUETA AMARILLA SI Y SOLO SI LA CEDULA DEL CLIENTE TERMINA EN UN NUMERO PAR, 
 EN CASO DE TERMINAR EN UN NUMERO IMPAR EL DESCUENTO SOLO SERA DEL 30%*/
#include <stdio.h>

int main(){

    /*declarando variables*/
    int cedula,terminal;
    float costo,costo_total,descuento;

    /*inicio codigo*/
    /* pedir cedula del cliente y costo del producto*/
    printf("Ingese la cedula:\n");
    scanf("%d",&cedula);
    printf("ingrese el costo del producto:\n");
    scanf("%f",&costo);
    
        
        
            /*obtenemos el residuo de la cedula dividida entre 10 para obtener el ultimo digito de la cedula*/
       cedula =cedula%10;
        
        /*aplicamos la condicion si el ultimo dijito de la cedula es par aplica 50% de descuento*/
        if (cedula%2==0)
         {
            descuento=costo*0.50;
            costo_total=costo-descuento;
            printf("el costo total con 50 porciento de descuento es %.2f",costo_total);/*aqui entendi como editar la cantidad de decimales a mostrar*/
         }/*si es impar se aplica un 30% de descuento*/
         else{
            descuento=costo*0.30;
            costo_total=costo-descuento;
            printf("el costo total con 30 porciento de descuento es %.2f",costo_total);
         }
         
        

    












}

