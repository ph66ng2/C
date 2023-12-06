#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void impar(int a[])
{

    int impares = 0;
    int i;
    int soma = 0;
    double media = 0;

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 != 0)
        {
               impares++;
               soma += a[i];
               media = (double) soma / impares;
        }
        
    }


    printf("Media impar: %1.f \n", media);
}


void par(int a[])
{

    int pares = 0;
    int somaPar = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
        {
            somaPar += a[i];
        }
    }

    printf("Soma Par: %d \n", somaPar);
}

int main()
{

    int n[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero \n");
        scanf("%d", &n[i]);
    }
   
   par(n);
   impar(n);
}

