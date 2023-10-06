#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char cauculo;
    int n1, n2;;
    double resultado;

    printf("Escreva o primeiro número \n");
    scanf("%d", &n1);

    printf("Escreva o segundo número \n");
    scanf("%d", &n2);

    fflush(stdin);

    printf("Escreva a operação Matemática \n");
    scanf("%c", &cauculo);

    switch (cauculo)
    {
    case '+':
       resultado = n1 + n2;
        break;

    case '-':
       resultado = n1 - n2;
        break;

    case '/':
       resultado = n1 / n2;
        break;

    case '*':
       resultado = n1 * n2;
        break;
    
    default:
        break;
    }

    printf("Primeiro número: %d \n", n1);
    printf("Segundo número: %d \n", n2);
    printf("Resultado: %.1lf \n", resultado);

} 
