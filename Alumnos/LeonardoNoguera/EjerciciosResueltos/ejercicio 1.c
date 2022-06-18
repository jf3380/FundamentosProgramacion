/*Determinar si un numero es par o impar
en caso de ser impar determinar si es un numero primo*/

#include <stdlib.h>


int main()
{
        int numero, par, impar;

        printf("indique un numero\n")  
        /*como necesitamos un numero, se lo pedimos al usuario*/
        scanf("%d",&numero);
        /*leemos el numero entero*/
	    
        /*ya que necesitamos varios resultados, usamos if y else*/
	if(n%2==0)
                {
		 par=n;
		 printf("\n%d es un numero par\n",par);
	           }
                else
                {
		impar=n;
		if((impar/impar==1)&&(impar/1==impar)){
		printf("\n%d es un numero primo\n",impar);
		}else{
			printf("\n%d no es un numero primo\n",impar);
		        }
			printf("\n%d es un numero impar\n",impar);
	        }
	
	return 0;
}
