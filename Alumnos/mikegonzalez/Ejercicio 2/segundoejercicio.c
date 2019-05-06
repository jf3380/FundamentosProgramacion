#include <stdio.h>
int main()
{
	int valor;
    printf("ingrese un valor\n");
    scanf("%d", &valor);
    if (valor > 100 ^ valor > 300)
    {
    	printf("El valor ingresado es mayor a 100 y a excedido el limite\n");
        printf("%d", valor);
    }
    return 0;
}