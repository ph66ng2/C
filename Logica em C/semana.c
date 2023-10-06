#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int data;
    char dia [250];
    char util [250];

    printf("Qual é o dia da semana \n");
    scanf("%d", &data);


    switch (data)
    {
    case 1:
    strcpy(dia, "Domingo");
    strcpy(util, "Não");
    printf("O dia da semana é: %s \n", dia); 
    printf("O dia é util?: %s \n", util);
    break;

    case 2:
    strcpy(dia, "Segunda");
    strcpy(util, "Sim");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    case 3:
    strcpy(dia, "Terça");
    strcpy(util, "Sim");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    case 4:
    strcpy(dia, "Quarta");
    strcpy(util, "Sim");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    case 5:
    strcpy(dia, "Quinta");
    strcpy(util, "Sim");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    case 6:
    strcpy(dia, "Sexta");
    strcpy(util, "Sim");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    case 7:
    strcpy(dia, "Sabado");
    strcpy(util, "Não");
    printf("O dia da semana é: %s \n", dia);
    printf("O dia é util?: %s \n", util);
    break;

    default:
        printf("Operação indispónivel");
        break;
    }

} 
