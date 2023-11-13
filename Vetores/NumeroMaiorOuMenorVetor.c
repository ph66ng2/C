#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int i;
    int numeros[5];
    int nMaior = 0;
    int nMenor = 9999            ;
    


    for (i = 0; i < 5; i++)
    {
        
        printf("Escreva seu número \n");
        scanf("%d \n", &numeros[i]);
        
       
        
        
        if (numeros[i] > nMaior){
            nMaior = numeros[i];
        }  
        
        if (numeros[i] < nMenor){
            nMenor = numeros[i];
        }
        
    }
    
    
    for (i = 0; i < 5; i++)
    {
    printf("%d \n", numeros[i]);
    
    }
    
    printf("Menor: %d \n", nMenor);
    printf("Maior: %d \n", nMaior);
}

    
    