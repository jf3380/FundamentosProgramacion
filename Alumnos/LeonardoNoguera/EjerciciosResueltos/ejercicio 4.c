/*Se desea llevar el control de los visitantes a la empresa Kactusnetwork 
por lo que se desea registrar a los mismos solicitando cedula, nombre, 
apellido y edad, para luego mostrar por pantalla la cantidad de visitantes 
mayores de 18 y menores a 50 asi como el promedio de visitas diarias general 
y los que esten dentro del rango*/

#include<stdio.h>

int main(){
    /*declaramos nuestras variables necesarias*/
	int edad, cedula, opc, prom=0, cant1=0, cant2=0;
	/*declaramos variables tipo char para tener un solo valor dentro de ellas*/
    char nombre[20];
	char apellido[20];

    /*como necesitamos repetir el proceso varias veces, usamos do y while*/	
	do{
		print("\nPara registrar sus datos: \n");
		printf("\n1)Nombre.\n");
		scanf("%s",&nombre);
		printf("\n2)Apellido.\n");
		scanf("%s",&apellido);
		printf("\n3)Edad.\n");
		scanf("%d",&edad);
			if((edad>=18)&&(edad<=50)){
				cant1++;
			}else{
				cant2++;
			}
		printf("\n4)Cedula.\n");
		scanf("%d",&cedula);
		printf("\n5)Salir.\n");
		printf("\n6)Continuar.\n");
		scanf("%d",&opc);
	}while(opc != 5);
	
    /*creamos nuestro promedio sumando nuestras variables cant*/
	prom = cant1 + cant2;
	printf("\nLa cantidad de visitantes dentro del rango es: %d\n",cant1);
	printf("\nLa cantidad de visitas diarias es de %d\n",prom);
	
	return 0;
}