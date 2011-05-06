#include <stdio.h>
#include <ctype.h>
#define LONGITUD 20



int main(){

    char palabra[LONGITUD+1];
    char letra_minus;
    int vocales=0,i;
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);
    for (i = 0; palabra[i] != '\0'; i++)
    {
        letra_minus=tolower(palabra[i]);
        if(letra_minus== 'a' ||
            letra_minus== 'e' ||
            letra_minus== 'i' ||
            letra_minus== 'o' ||
            letra_minus== 'u')
        {
            vocales++;
        }
        
    }
    printf("\nla cantidad de vocales es: %d ", vocales);
    return 0;







}
