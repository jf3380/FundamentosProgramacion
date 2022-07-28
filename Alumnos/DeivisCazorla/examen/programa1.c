/*Deivis cazorla 27242847*/
/*programa1 ¿desarrollar un programa que calcule e imprima la calificacion final de n alumnos 
en la materia en fundamentos de programacion dicha calificacion se compone de los siguientes porcentajes 55% 
del promedio de sus 3 calificaciones parciales, 30% de la calificacion del examen final, 15% de la calificacion de un trabajo final. de acuerdo a la nota final indicar la 
valoracion de acuerdo al siguente criterio de 0 a 9 reprobado de 10 a 13 regular de 14 a 16 buenon de 17 a 19 muy bueno,y 20 exelente?*/
#include <stdio.h>
#define PORCENTAJE1 0.55
#define PORCENTAJE2 0.30
#define PORCENTAJE3 0.15
#define LONGITUD 10


int main(){
	int n,i,j;
    char nombre[LONGITUD+1];
    float primeras_3_calificaciones=0,notas_3=0,calificacion_f=0,notaf=0,trabajof=0,porcentaje_55=0;

	
      /* inicio*/
        printf("ingrese la cantidad de alumnos que desea ingresar: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){

            primeras_3_calificaciones=0,notas_3=0,calificacion_f=0,notaf=0,trabajof=0,porcentaje_55=0;
                  
		printf("\ningrese nombre del alumno: ");
		scanf("%s",nombre);
		printf("ingrese las primeras 3 calificaciones\n");
	   		for(j=1;j<=3;j++){
	          printf("ingrese nota %d: ", j);
	   		 scanf("%f",&notas_3);
	  		 primeras_3_calificaciones=primeras_3_calificaciones+notas_3;
	    	}
	    	porcentaje_55=primeras_3_calificaciones*PORCENTAJE1;
		porcentaje_55=porcentaje_55/3;
		printf("\ningrese la calificacion del examen final: ");
		scanf("%f",&calificacion_f);
 		notaf=porcentaje_55+calificacion_f*PORCENTAJE2;
		printf("\ningrese la calificacion del trabajo final: ");
		scanf("%f",&trabajof);
		notaf=notaf+trabajof*PORCENTAJE3;
                
		if(notaf<=9){
		printf("\nel alumno %s salio reprobado con una calificacion de %.2f",nombre,notaf);

		}else if(notaf>=10 && notaf<=13){
			printf("\nel alumno %s salio regular  calificacion de %.2f",nombre,notaf);


			}else if(notaf>=14&& notaf<=16){
				printf("\nel alumno %s salio bien  calificacion de %.2f",nombre,notaf);

			
			  }else if(notaf>=17 && notaf<=19){
					printf("\nel alumno %s salio muy bien  calificacion de %.2f",nombre,notaf);

				}else {
					printf("\nel alumno %s salio exelente calificacion de %.2f",nombre,notaf);

					}

	
           


	}

  return 0;




} 
