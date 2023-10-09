#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{


    setlocale(LC_ALL, "portuguese");

int i;
int j;
int multiplicador;
int resultado = i * j;

//printf("Escolha o Número:");
//scanf("%d",&multiplicador);//


// taabuada Normal
for (i = 0; i < 11; i++)
{
    printf("%d x %d = %d \n", i, i, i*i);
}



// Tabuada com 2 loops
    for ( j = 2; j < 8; j+=2)
    {
       for ( i = 0; i < 11; i++)
       {
        printf("%d x %d = %d \n", i , j, i*j);
       }
        printf("\n");
    }
    


   // tabuada ao Contrario
    for ( i = 10; i >= 1; i--)
   {
       printf("5 x %d = %d \n", i, i*5);
       
   }



    
}