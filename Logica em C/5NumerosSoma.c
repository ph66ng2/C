#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{




    int i;
    int numeros;
    int soma = 0;
    


    for (i = 0; i <= 5; i++)
    {
        
        printf("Escreva seu número \n");
        scanf("%d", &numeros);


        soma += numeros; 
        
    }
    
     printf("Resultado %d \n", soma);
}