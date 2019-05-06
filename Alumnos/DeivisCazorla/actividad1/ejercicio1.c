#include<stdio.h>

#include<conio.h>
int main()

{

    int n,i=1,c=0;

    printf("Ingresa un numero:\n");

    scanf("%i",&n);

    if (n % 2 == 0){

        printf("El numero es par\n");

       }

    else{

        printf("El numero es impar\n");
         while (i <= n)

        {

        if (n % i == 0){

            c++;

        }

        i++;

       }

       if (c == 2){

        printf("El numero es primo");

        }

        else{

         printf("El numero no es primo");

        }

    }
   getch();
    return 0;
 
}