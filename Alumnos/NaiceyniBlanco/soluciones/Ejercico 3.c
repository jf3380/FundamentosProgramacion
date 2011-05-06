

#include<stdio.h>

int main(){
	int i,n, fact=0;

		if((n==1)||(n==0)){
			fact=1;
			printf("\nEl factorial es: %i",fact);
		}else{
			for(i=1;i<=n;i++){
				fact=fact*i;
				printf("\nEl factorial es %i",fact);
			}
		}

return 0;
}
