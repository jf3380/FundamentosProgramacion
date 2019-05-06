#include <stdio.h>
#include <string.h>
#define TAM 100
int main(){
    int cant_vocales = 0;
    char texto[TAM];
    int i = 0;
    int voc_convertidas;
    printf("\n\tIngrese el texto: ");
    fgets(texto, TAM, stdin);
    do{
        
        if (texto[i] == 'a')
        {
            cant_vocales++;
            texto[i] = '4';
        }

        i++;
        if (texto[i] == 'e')
        {
            cant_vocales++;
            texto[i] = '3';
        }
        i++;
        if (texto[i] == 'i')
        {
            cant_vocales++;
            texto[i] = '1';
        }
        i++;
        if (texto[i] = 'o')
        {
            cant_vocales++;
            texto[i] = '0';
        }
        i++;
        if (texto[i] == 'u')
        {
            cant_vocales++;
            texto[i] = '*';
        }
        i++;
        break;
        
    } while(texto[i] != '\0');
    printf("\n%c", texto[i]);
    voc_convertidas = strlen(texto);
    return 0;
    
}