/*se desea desarrollar el control de los visitantes
a la empresa KACTUSNETWORK, por lo que se desea 
registrar los mismos 

*/

#include<stdio.h>

int main(){
	int edad, ced, opc, prom=0, cant1=0, cant2=0;
	char nombre[20];
	char apellido[20];
	
	do{
		printf("\n\tEMPRESA KACTUSNETWORK");
		printf("\nPara registrar sus datos: \n");
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
		scanf("%d",&ced);
		printf("\n5)Salir.\n");
		printf("\n6)Continuar.\n");
		scanf("%d",&opc);
	}while(opc != 5);
	
	prom = cant1 + cant2;
	printf("\nLa cantidad de visitantes dentro del rango es: %d\n",cant1);
	printf("\nLa cantidad de visitas diarias es de %d\n",prom);
	
	return 0;
}
