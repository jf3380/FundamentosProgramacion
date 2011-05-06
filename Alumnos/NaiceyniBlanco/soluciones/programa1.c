/*desarrollar un algoritmo que calcule e imprima la 
calificacion final de n alumnos en la materia de fundamentos
de programacion, dicha calificacion se compone de los siguientes
porcentajes: 55% del promedio de sus tres calificaciones parciales
30% de las calificacion del examen final, 15% de la calificacion
de un trabajo final. de acuerdo a la nota final indicar la 
valoracion de acuerdo al siguiente criterio: de 0 a 9 reprobado,
10 a 13 regular, de 14 a 16 bueno, 17 a 19 muy bueno, 20 excelente*/

#include<stdio.h>

int main(){
	int n,i,nota_1=0,nota_2=0,nota_3=0,nota_f=0,nota_tf=0;
	float prom=0,prom_ef=0,prom_tf=0,nota_final=0;
	char opc, nombre[10],apellido[10];
	
	do{
	
//	printf("ingrese la cantidad de alumnos: \n");
//	scanf("%i",&n);
	
//	for(i=1;i<=n;i++){
		printf("Ingrese nombre y apelido: \n");
		scanf("%s %s",nombre,apellido);
		printf("Ingrese nota del parcial 1: \n");
		scanf("%i",&nota_1);
		printf("Ingrese nota del parcial 2: \n");
		scanf("%i",&nota_2);
		printf("Ingrese nota del parcial 3: \n");
		scanf("%i",&nota_3);
		printf("Ingrese nota del examen final: \n");
		scanf("%i",&nota_f);
		printf("Ingrese nota del trabajo final: \n");
		scanf("%i",&nota_tf);
		
		prom = (nota_1+nota_2+nota_3)*0.55;
		prom_ef = nota_f * 0.3;
		prom_tf = nota_tf * 0.15;
		nota_final = (prom + prom_ef + prom_tf)*3;
		
		if((nota_final==0)&&(nota_final<=9)){
			printf("la nota final es: %.2f",nota_final);
			printf("REPROBADO");
		}else if((nota_final==10)&&(nota_final<=13)){
			printf("la nota final es: %.2f",nota_final);
			printf("REGULAR");			
		}else if((nota_final==14)&&(nota_final<=16)){
			printf("la nota final es: %.2f",nota_final);
			printf("BUENO");		
		}else if((nota_final==17)&&(nota_final<=19)){
			printf("la nota final es: %.2f",nota_final);
			printf("MUY BUENO");
		}else if((nota_final==20)){
			printf("la nota final es: %.2f",nota_final);
			printf("EXCELENTE");
		}
	
	 	printf("desea ingresar mas alumnos s/n");
	 	scanf("%c",&opc);
		
	}while(opc!='n');
	
	return 0;
}
