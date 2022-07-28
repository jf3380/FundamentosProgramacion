/*deivis cazorla27242847*/
/* la empresa toyland estas navidades estas navidades desea otorgar un descuento
 especial a sus clientes mediante un concurso basandose
 en las siguientes reglas compras mayores o iguales a 10 mil bs pero no exedan de 50mil bs los productos en juego solo seran aquellos que tengan la equeta de color morado(m) o amarillo(a),
ademas el precio de cada producto no debe exeder los 10mil bs y la cedula de cliente debera terminar en un digito par el descuento sera del 30% imprimir por pantalla los datos del cliente con el detalle de su compra?*/
#include <stdio.h>
#define ETIQUETA_AMARILLA 'a'
#define ETIQUETA_MORADA 'm'
#define LONGITUD 10
#define DIEZ_MIL 10000
#define CIENCUENTA_MIL 50000

int main(){ 


	int cedula,d_cedula,j=0,e=0,i=1;
	float precio_p,precio_t,acum_sin_e=0,acum_con_e=0;
	char etiqueta;
	char nombre[LONGITUD+1];
	char confirmacion;
	
        printf("ingrese nombre del cliente: ");
	scanf("%s",nombre);
	printf("ingrese su cedula: ");
	scanf("%d",&cedula);
	d_cedula=cedula%10;
	printf("%d\n",d_cedula );
	do
	{
		
	
		printf("ingrese precio del producto N %d: ",i );
	    scanf("%f",&precio_p);
	    printf("ingrese la iniciar del color de la etiqueta en minusculas morado(m) o amarilla(a),si no posee coloque n: ");
	    scanf(" %c",&etiqueta);
		if(etiqueta== ETIQUETA_MORADA || etiqueta == ETIQUETA_AMARILLA){
			e++;
			if((precio_p<=DIEZ_MIL) && (d_cedula%2)==0){
				acum_con_e=acum_con_e+precio_p;
				j++;
			}else{
				acum_sin_e=acum_sin_e+precio_p;
			}

		}else{
			acum_sin_e=acum_sin_e+precio_p;
		}

		i++;
		printf("si desea ingresar un nuevo producto coloque en minuscula (s) si no coloque (n): ");
		scanf(" %c",&confirmacion);
		printf(" %c\n",confirmacion );
	} while (confirmacion != 'n' );
	  precio_t=acum_con_e+acum_sin_e;
	  if (precio_t>=DIEZ_MIL && precio_t<=CIENCUENTA_MIL && (d_cedula%2) == 0)
	  {
	  	acum_con_e=acum_con_e*0.30;
	  	precio_t=precio_t-acum_con_e;
	  	printf("\nel cliente %s de cedula %d \n",nombre,cedula );
	  	printf("compro un total de %d productos de los cuales %d fueron con etiquetas aceptados y el total de productos con etiquetas fue %d ",i,j,e);
	  	printf("\nobtuvo su descuento 30 porciento y el total fue %.2f ",precio_t );
	  }else{
	  	printf("el cliente %s de cedula %d ",nombre,cedula );
	  		  	printf("compro un total de %d productos de los cuales %d fueron con etiquetas aceptados y el total de etiquetas fue %d ",i,j,e);
	  	printf("pero no cumplio con todas las condiciones y el total fue %.2f ",precio_t );

	  }


	   
	
	
	return 0;
	
	
	

	
	
	


	




}
