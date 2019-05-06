#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30
int main(){
    char nombre[TAM]; //string de 20 caracteres
    char apellido[TAM];
    int longitud_string;

    printf("Escribe tu nombre: ");
    fgets(nombre, TAM, stdin); 
    printf("Te llamas: %s \n", nombre); //muestro nombre por pantalla

    longitud_string = strlen(nombre); //strlen cuenta caracteres
    printf("Tu nombre: %s tiene %i caracteres. \n", nombre, longitud_string);

    printf("Escribe tu apellido: ");
    fgets(apellido, TAM, stdin);
    printf("Te llamas: %s %s \n", nombre, apellido);
    longitud_string = strlen(apellido);
    printf("Tu apellido: %s tiene %i caracteres. \n", apellido, longitud_string);
    return 0;
}