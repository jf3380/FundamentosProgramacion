/*
desarrolle un algoritmo que permita leer una frase
y muestre en pantalla la cantidad de vocales que tiene
*/
#include <stdio.h>
#include <string.h>

int main(){
	char frase [100];
	int i,cont_a=0,cont_e=0,cont_i=0,cont_o=0,cont_u=0,cont_total;
	
	printf("Ingrese una frase: ");
	scanf("%s",frase);
	   
	     for(i=1;i<=100;i++){
		switch(frase[i]){
		     case 'a': cont_a++; break;
		     case 'e': cont_e++; break;
		     case 'i': cont_i++; break;
		     case 'o': cont_o++; break;
		     case 'u': cont_u++; break;
		}
	     }
		cont_total = cont_a + cont_e + cont_i + cont_o + cont_u;
		printf("\tLa cantidad de vocales es: %i\n",cont_total);

return 0;
}
