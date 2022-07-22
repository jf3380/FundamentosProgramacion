#include <stdio.h>
#include <string.h>
#define TAM 100 
int main(){
        int v=0;
        char frase[TAM];

        printf("\n\t\t\tLA FRASE\n");
        printf("\n\tIngrese su frase: ");
        gets(frase);
        for (int i = 0; i < 100; i++)
        {
                switch (frase[i])
                {
                        case 'a':
                                v++;
                                break;
                        case 'e':
                                v++;
                                break;
                        case 'i':
                                v++;
                                break;
                        case 'o':
                                v++;
                                break;
                        case 'u':
                                v++;
                                break;
                        
                        case 'A':
                                v++;
                                break;
                        case 'E':
                                v++;
                                break;
                        case 'I':
                                v++;
                                break;
                        case 'O':
                                v++;
                                break;
                        case 'U':
                                v++;
                                break;
                        default:
                                break;
                }
        }
        printf("\n En la frase hay: %i vocales. \n", v);
        

        return 0;
}