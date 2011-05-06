#include <stdio.h>
#include <ctype.h>
#define LONGITUD 20

/*modifique el codigo anterior un poco jajaja*/

int main(){

    char palabra[LONGITUD+1];
    char letra_minus;
    int vocales=0,i;
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);
    for (i = 0; palabra[i] != '\0'; i++)
    {
        letra_minus=tolower(palabra[i]);
        if( letra_minus== 'a')
        {
            palabra[i]='4';
            vocales++;
        }else if( letra_minus== 'e')
        {
            palabra[i]='3';
            vocales++;
        }else if( letra_minus== 'i')
        {
            palabra[i]='1';
            vocales++;
        }else if( letra_minus== 'o')
        {
            palabra[i]='0';
            vocales++;
        }else if( letra_minus== 'u')
        {
            palabra[i]='*';
            vocales++;
        }

        
    }
    printf("\nla cantidad de vocales es: %d ", vocales);
    printf("\ny el cambio de las vocales es: %s",palabra);

    return 0;







}
