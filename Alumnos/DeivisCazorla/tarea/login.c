#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define USUARIO "adrian"
#define CLAVE "ad12"
#define LONGITUD 10
int main(){

    char usuario[LONGITUD+1];
    char clave[LONGITUD+1];
    int intentos=0;
    int ingreso=0;
    do
    {
        system("cls");
        printf("-------------------INICIAR SESION-------------------\n");
        printf("\n------------------------------------------------------\n");
        printf("Ususario: ");
        scanf("%s",usuario);
        printf("\ncontraseña: ");
        scanf("%s",clave);
        if (strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0)
            {
                 
                ingreso=1;
            }
            else{
                printf("\n----------USUARIO Y/O CLAVE INCORRECTO-----");
                
                intentos++;
            getch();
            }


    } while (intentos<3 && ingreso==0);
     if(ingreso==1){
        printf("\n------------------BIENBENIDO AL SISTEMA-------------");
     }else{

        printf("\n------------ A EXEDIDO EL NUMERO DE INTENTOS PERMITIDOS----------");
     }
    



}
