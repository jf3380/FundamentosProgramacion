#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define USUARIO "adrian"
#define CLAVE "ad12"
#define LONGITUD 10
#define TECLA_ENTER 13
#define BORRAR 8
int main(){
     
    char usuario[LONGITUD+1];
    char clave[LONGITUD+1];
    int intentos=0,i=0;
    int ingreso=0;
    char caracter;
    do
    {
        system("cls");
        printf("-------------------INICIAR SESION-------------------\n");
        printf("\n------------------------------------------------------\n");
        printf("Ususario: ");
        scanf("%s",usuario);
        printf("\ncontraseña: ");
    
        while (caracter=getch())
        {
          if (caracter==TECLA_ENTER)
          {
            clave[i]='\0';
            break;
          }else if(caracter==BORRAR) {
             if(i>0){
              i--;
              printf("\b \b");
              }

          }else{
            if (i<LONGITUD)
            {
              printf("*");
          clave[i]=caracter;
          i++;
            }
            
            
          }
          
        }
        
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
    
    return 0;


}
