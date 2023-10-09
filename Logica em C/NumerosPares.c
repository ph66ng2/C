#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{


    setlocale(LC_ALL, "portuguese");


    int i;
// Pares e Impares
    for ( i = 1; i < 201; i++)
    {
        if (i % 2 == 0){
            printf("%d \n", i);
        }
        else if (i % 2 != 0){
            printf("%d \n", i);
        }
    }
    
}