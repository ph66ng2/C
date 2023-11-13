#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int i;
    int numero[3];
    int positivos;
    int negativos;
    int somaReal;
    


    for (i = 0; i < 3; i++)
    {
        printf("Escreva um numero \n");
        scanf("%d", &numero[i]);
        
        
        
        
        if (numero[i] > 0){
            positivos += numero[i];
        } else if (numero[i] < 0){
            negativos++;
        }
        
      
        somaReal += numero[i];
        
    }
    
    printf("Soma de todos os numeros: %d \n", somaReal);
    printf("Numero de negativos: %d \n", negativos);
    printf("Soma dos numeros positivos: %d \n", positivos);
    
}
    

    
    