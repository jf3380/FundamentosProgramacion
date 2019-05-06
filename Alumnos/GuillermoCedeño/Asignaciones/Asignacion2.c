/* 2) LEER UN VALOR POR TECLADO Y MOSTRAR POR PANTALLA SI EL NUMERO
 ES MAYOR A 100 Y NO EXCEDE DE 300 DE CUMPLIR CON ESTE RANGO SE PIDE
 MOSTRAR LOS NUMEROS CONSECUTIVOS HASTA N NUMEROS ASCENDENTE. */
 
#include<stdio.h>

int main(){
	int n,i;	/* Establezco mis variables */
	char u_t = 163; /* Le doy el valor 163 a la variable caracter u_t para que salga ú */
	
	printf("Ingrese un n%cmero: ",u_t);
	scanf("%i",&n); /* Le pido al usuario que ingrese los datos como es costumbre */
	
	if((n>100)&&(n<=300)){	/* Compruebo si el número este en el rango */
		for(i=1;i<=n;i++){	/* De ser así utilizo un ciclo for ya que se cual va a ser mi número de interacciones */
			printf("%i \t",i);	/* Voy imprimiendo todos los números desde el 1 hasta llegar al número dado */
		}
	}
	else{	/* En caso de que el número no se encuentre en el rango, muestro lo sigueinte por pantalla: */
		printf("El n%cmero no se encuentra en el rango (101-300)",u_t);
	}
	
	
	return 0;
}
