#include<stdio.h>
#include<string.h>
#define PORCENTAJE1 0.55
#define PORCENTAJE2 0.3
#define PORCENTAJE3 0.15

int main (){
	int par1,par2,par3,exaf,trabf,opc;
	char nombre[20],apellido[20];
	float aux=0,nota_parcial=0,nota_exaf=0,nota_trabf=0,nota_final=0;

	do{
	    printf("\tNotas finales de fundamentos de programacion ");
	    printf("\ningresar nombre: ");
	    scanf("%s",nombre);
	    printf("\ningresar apellido: ");
	    scanf("%s",apellido);
	    printf("\ningresar las tres notas parciales: ");
	    scanf("%i",&par1);
	    scanf("%i",&par2);
	    scanf("%i",&par3);
	    printf("\ningresar calificacion examen final: ");
	    scanf("%i",&exaf);
	    printf("\ningresar calificacion trabajo final: ");
	    scanf("%i",&trabf);
	
		aux = (par1 + par2 + par2) * PORCENTAJE1;
		nota_parcial = aux / 3;
		nota_exaf = exaf * PORCENTAJE2; 
		nota_trabf = trabf * PORCENTAJE3;
		nota_final = nota_parcial + nota_exaf + nota_trabf;
		
			if(nota_final <= 9){
				printf("\nalumno reprobado %.2f",nota_final);
			}else{
				if(nota_final <= 10){
					printf("\nalumno regular %.2f",nota_final);
				}else{
					if(nota_final <= 14){
						printf("\nalumno bueno %.2f",nota_final);
					}else{
						if(nota_final <= 17){
							printf("\nalumno muy bueno %.2f",nota_final);
						}else{
							printf("\nalumno excelente %.2f",nota_final);
						}
					}
				}
			}

		printf("\ndesea ingresar mas alumnos (1) si y no (0) ");
		scanf("%i",&opc);

	}while(opc != 0);



return 0;
}
