#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int idade;

    printf("Qual sua idade? \n");
    scanf("%d", &idade);

    if (idade > 65 || idade < 18)
    {
        printf("Não é necessario o voto. \n");
    }
    else
    {
        printf("É necessario voto. \n");
    }

    return 0;
}