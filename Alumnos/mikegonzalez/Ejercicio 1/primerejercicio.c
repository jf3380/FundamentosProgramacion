#include <stdio.h>
int main()
{
	int num;
	printf("ingrese un numero\n");
	scanf("%d",&num);
	if (num%2 == 0)
	{
		printf("numero es par\n");
	}
	else{
		printf("el numero es impar\n");
	}
	if (num/num ^ num/1)
	{
		printf("el numero es primo\n");
	}
    return 0;
}
