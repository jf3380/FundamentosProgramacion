/* Aaron Arias - 26508055
 * Desarrollar un programa que calcule e imprima la calificación final
 * de n alumnos en la materia de Fundamentos de Programación, dicha
 * calificación se compone de los siguientes porcentajes: 55% del
 * promedio de sus tres calificaciones parciales, 30% de las
 * calificación de examen final, 15% de la calificación de un trabajo
 * final. De acuerdo a la nota final indicar la valoración de acuerdo al
 * siguiente criterio: de 0 a 9 Reprobado, 10 a 13 Regular, de 14 a 16
 * Bueno, 17 a 19 Muy Bueno, y 20 Excelente.
*/

#include<stdio.h>

#define TRESNOTAS 0.55
#define LAST 0.30
#define WORK 0.15

int main(){
    int nota1, nota2, nota3, final, trabajo;
    float promTN = 0, promLA = 0, promWO = 0, n_final;
    char estudiante;

    do{
        printf("\nBienvenido al Programa para saber su Nota Final en Fundamentos de Programacion. \n    Favor de presionar 'ENTER' despues de cada nota agregada. \n");
        printf("\n Ingrese su 1era nota: ");
        scanf("%d", &nota1);
        printf("\n Ingrese su 2da nota: ");
        scanf("%d", &nota2);
        printf("\n Ingrese su 3era nota: ");
        scanf("%d", &nota3);
        promTN = (nota1 + nota2 + nota3);
        promTN = (promTN * TRESNOTAS) / 3;
        printf("\n El promedio de sus tres notas es: %.2f \n", promTN);
        
        printf("\n Ingrese la nota de su examen final: ");
        scanf("%d", &final);
        promLA = final * LAST;
        printf("\n El promedio de su examen final es: %.2f \n", promLA);
        
        printf("\n Ingrese la nota de su trabajo final: ");
        scanf("%d", &trabajo);
        promWO = trabajo * WORK;
        printf("\n El promedio de su trabajo final es: %.2f \n", promWO);
        
        n_final = promTN + promLA + promWO;
        
        if(n_final < 10){
            printf("\n Su nota es %.2f \n", n_final);
			printf(" Usted esta REPROBADO \n");
        }else{
            if(n_final < 14){
                printf("\n Su nota es %.2f \n", n_final);
				printf(" Usted paso REGULAR (entre 10 y 13) \n");
			}else{
                if(n_final < 17){
                    printf("\n Su nota es %.2f \n", n_final);
					printf(" Usted paso MUY BUENO (entre 14 y 16) \n");
                }else{
                    if(n_final < 20){
                        printf("\n Su nota es %.2f \n", n_final);
						printf(" Usted paso BUENO (entre 17 y 19) \n");
					}else{
					    printf("\n Su nota es %.2f \n", n_final);
                        printf(" Usted paso con EXCELENTE nota \n");
					}
                }
            }
		}
        
        printf("\nVa a pasar otro estudiante s/n: ");
        scanf("%s", &estudiante);
    }while(estudiante == 's' || estudiante == 'S');

    return 0;
}