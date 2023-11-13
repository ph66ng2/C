#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int i;
    int numeros[6];
    int nPar = 0;
    int nInpar = 0;
    


    for (i = 0; i < 6; i++)
    {
        
        printf("Escreva seu número \n");
        scanf("%d \n", &numeros[i]);
        
       
        if (numeros[i] % 2 == 0){
            nInpar++;
        }  
        
        if (numeros[i] % 2 != 0){
            nPar++;
        }
        
    }
    
    
    for (i = 0; i < 5; i++)
    {
    printf("Numero: %d \n", numeros[i]);
    
    }
    
    printf("Par: %d \n", nPar);
    printf("Inpar: %d \n", nInpar);
}

    
    