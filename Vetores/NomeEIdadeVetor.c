#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int i;
    char nome [250] [5];
    int idade[5];
    


    for (i = 0; i < 5; i++)
    {
        printf("Escreva sua idade \n");
        scanf("%d", &idade[i]);
        
        fflush(stdin);
        
        printf("Escreva seu nome \n");
        scanf("%s", &nome[i]);
        
        fflush(stdin);
        
    }
    
    
    for (i = 0; i < 5; i++)
    {
    printf("Nome: %s \n", nome[i]);
    
    printf("idade: %d \n", idade[i]);
    
    
    }
}
    

    
    