#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void operacoes(int a[])
{

    int i;
    int soma = 0;
    int subtracao = 0;
    double divisao = 0;
    int multiplica = 0;


for (i = 0; i < 2; i++)
{
    soma += a[i];

    subtracao = a[0] - a[1];

    divisao = a[0] / a[1];

    multiplica = a[0] * a[1];


}

    
    printf("Soma: %d \n", soma);
    printf("Subtracao: %d \n", subtracao);
    printf("Multiplicacao: %d \n", multiplica);
    printf("Divisao: %lf \n", divisao);
}

int main()
{

    int n[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite um numero \n");
        scanf("%d", &n[i]);
    }
   
    operacoes(n);
}

