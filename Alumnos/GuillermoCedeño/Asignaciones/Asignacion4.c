/* 4) SE DESEA LLEVAR EL CONTROL DE LOS VISITANTES A LA EMPRESA 
KACTUSNETWORK POR LO QUE SE DESEA REGISTRAR LOS MISMOS SOLICITANDO 
CEDULA, NOMBRE, APELLIDO Y EDAD, PARA LUEGO MOSTRAR POR PANTALLA LA 
CANTIDAD DE VISITANTES MAYORES DE 18 Y MENORES A 50 ASI COMO EL PROMEDIO 
DE VISITAS DIARIAS GENERAL Y LOS QUE ESTEN DENTRO DEL RANGO. */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int ced, edad, vis_total=0, vis_in_range=0,i=0,opcion=1;
	char nom[40], ape[40], e_t = 130; /*Establezco mis variables y les doy valores de inicialización*/
	
	
	while(opcion==1){	/* Empiezo un ciclo while para registrar todos los casos hasta que yo le diga que pare */
		printf("\tControl de visitantes de KactusNetwork \n");
		
		printf("\nIngrese el nombre: "); scanf("%s",&nom); /* En esta linea intente pedir el nombre y el apellido juntos con gets() pero no funcionaba el ciclo XD y no logré arreglarlo */
		printf("\nIngrese el apellido: "); scanf("%s",&ape);
		printf("\nIngrese la c%cdula: ",e_t); scanf("%i",&ced);
		printf("\nIngrese la edad: "); scanf("%i",&edad); /* Pido los datos al usuario */
		
		if((edad>=18)&&(edad<=50)){
			vis_in_range = vis_in_range + 1;	/* Compruebo que los edad este en el rango que me da el ejercicio */
		}
		i++;	/* Le sumo 1 a la variable i que me ayudara a contar el total de casos */
			
		printf("1. Siguiente visitante\n");	/* Parte grafica de un mini menú */
		printf("2. Terminar\n");
		scanf("%i",&opcion);
		
		switch(opcion){						/* Parte funcional del menú para ver organizadamente las opciones de usuario*/
			case 1:	system("cls");
			
			break;							/* Utilizo system("cls") para eliminar el contenido en pantalla y que no se acumulen casos anteriores */
			case 2:	system("cls");
					printf("Total de visitantes dentro del rango de edad: %i\n",vis_in_range);
					printf("Total de visitantes: %i\n",i);
											/* y en cualquier de estos últimos dos casos imprimo el total de visitantes y finalizo el programa */
			break;
			default: 	printf("Ha seleccionado un valor incorrecto, finalizando programa");
						printf("Total de visitantes dentro del rango de edad: %i\n",vis_in_range);
						printf("Total de visitantes: %i\n",i);
		}
		
	}
	
	printf("\nPrograma finalizado"); /* para recalcar que finalicé el programa */
	
	return 0;
}
