#include <stdio.h>
int main()
{
	int cedula;
	float descuento,precio_producto;
	printf("ingrese su cedula \n");
	scanf("%d",&cedula); 
    printf("ingrese el precio del producto\n");
	scanf("%f",&precio_producto);
	if (cedula%2 == 0)
	{
        descuento = precio_producto * 50/100;
		printf("el descuento es: %f",descuento);
	}else{
		descuento = precio_producto * 30/100;
		printf("el descuento es: %f",descuento);
	} 
    return 0;
}
