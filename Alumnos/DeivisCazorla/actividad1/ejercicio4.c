/*4) SE DESEA LLEVAR EL CONTROL DE LOS VISITANTES A LA EMPRESA KACTUSNETWORK POR LO QUE SE DESEA REGISTRAR 
LOS MISMOS SOLICITANDO CEDULA, NOMBRE, APELLIDO Y EDAD, PARA LUEGO MOSTRAR POR PANTALLA LA CANTIDAD DE 
VISITANTES MAYORES DE 18 Y MENORES A 50 ASI COMO EL PROMEDIO DE VISITAS DIARIAS GENERAL 
Y LOS QUE ESTEN DENTRO DEL RANGO.*/
#include <stdio.h>

int main(){
 /* declaro las variables*/
 /*cvmym es cantida de visitantes con edad mayor y menor al rango pedido*/
 /*cv es cantidad de visitantes fuera del rango*/
 /*cvt es la cantidad total de visitante tanto los que cumplen el rango como los que no*/
    int cedula,edad,cvmym=0,cv=0,cvt;
    char nombre,apellido,confirmacion;
    float promediovr;
    /*utilizo un ciclo do while para que se ejecute con la confirmacion si desea ingresar mas visitantes*/
 do
 {
    
 /*solicitando los datos a ingresar por pantalla*/
    printf("ingrese la cedula:\n");
    scanf("%d",&cedula);
    printf("ingrese el nombre:\n");
    scanf("%s",&nombre);
    printf("ingrese el apellido:\n");
    scanf("%s",&apellido);
    printf("ingrese la edads:\n");
    scanf("%d",&edad);
    /*ejecutando la condicion de visitantes mayor y menor al rango de edad*/
    if(edad>18 && edad<50){
        cvmym=cvmym+1;
     }/*si no cumple con el rango entoces */
    else{
        cv=cv+1;
    }
      /*aqui solicito la confirmacion para ingresar mas clietes*/
    printf("si desea ingresar mas clientes coloque la letra s si no coloque n :\n");
    scanf("%s",&confirmacion);
   } while (confirmacion == 's');
    /*luego de teminar de ingresar los clientes se realizan las operaciones*/
   printf("la cantidad de visitantes mayores de 18 y menores de 50 es:\n%d\n",cvmym);
      cvt=cv+cvmym;
      printf("el promedio total de visitas es:\n%d\n",cvt);
      promediovr=(float)cvmym/(float)cvt;
      printf("el promedio de visitantes mayores de 18 y menores de 50 es:\n%.2f\n",promediovr);
     return 0;
 
}
