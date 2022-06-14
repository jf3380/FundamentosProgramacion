/* determinar si un numero es par o impar,
en caso de ser impar determinar si es un numero 
primo*/

#include<stdio.h>

int main(){
	int n, par, impar;
	
	printf("\nDigite un numero: \n");
	scanf("%d",&n);
	
	if(n%2==0){
		par=n;
		printf("\n%d es un numero par\n",par);
	}else{
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
