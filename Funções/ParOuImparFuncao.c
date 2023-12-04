#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void parOuImpar(int a[])
{

    int pares = 0;
    int impares = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("Pares: %d \n", pares);
    printf("Impares: %d \n", impares);
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
   
   parOuImpar(n);
}


