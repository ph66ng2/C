#include <stdlib.h>
#include <stdio.h>
#include <string.h>


double operacoes(double a)
{

    double metrosParaCentimetros;

    metrosParaCentimetros = a * 100;

    return metrosParaCentimetros;
}

int main()
{

    double n;
    double resultado;

   
        printf("Digite um numero de metros \n");
        scanf("%lf", &n);
    
   
     resultado = operacoes(n);

     printf("Resultado e: %1.lfcm", resultado);

    return 0;
}

