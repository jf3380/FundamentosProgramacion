/*Determinar si un numero es par o impar
En caso de ser impar determinar si es un numero primo*/

#include <stdio.h>

int main()
{
    int num, x = 3< x;     /*establesco mis variables*/
    
    printf("\n Introduzca un numero: ");      /*le pedimos al usuario que ingrese un numero*/
    scanf("%d", &num);
    
    if (num % 2 == 0)                          /*un numero es par cuando al dividirse entre dos el residuo es 0, de lo contrario, es impar*/
        printf("%i es un numero PAR\n", num);
    else
        if (num == 3)                          /*3 es el primer numero impar y primo, si el numero ingresado es este, se identifica automaticamente el resultado*/
            printf("\n %i es un numero IMPAR y PRIMO\n", num);
        else
            if (num % num == 0 && num % 1 == 0 && num % 3 == 0 && num % x == 0)  /*de no ser 3 el numero introdicido, para ser primo, 
solo debe poder dividirse entre el mismo y el 1, si se puede dividir por cualquier otro numero, es compuesto*/
                printf("%i es un numero IMPAR y COMPUESTO\n", num);
            else
                printf("%i es un numero IMPAR y PRIMO\n", num);     /*de no cumplir con lo anteriro, el numero ingresado es impar y primo*/
                
    return 0;
}
