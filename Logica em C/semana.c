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

    printf("Qual � o dia da semana \n");
    scanf("%d", &data);


    switch (data)
    {
    case 1:
    strcpy(dia, "Domingo");
    strcpy(util, "N�o");
    printf("O dia da semana �: %s \n", dia); 
    printf("O dia � util?: %s \n", util);
    break;

    case 2:
    strcpy(dia, "Segunda");
    strcpy(util, "Sim");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    case 3:
    strcpy(dia, "Ter�a");
    strcpy(util, "Sim");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    case 4:
    strcpy(dia, "Quarta");
    strcpy(util, "Sim");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    case 5:
    strcpy(dia, "Quinta");
    strcpy(util, "Sim");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    case 6:
    strcpy(dia, "Sexta");
    strcpy(util, "Sim");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    case 7:
    strcpy(dia, "Sabado");
    strcpy(util, "N�o");
    printf("O dia da semana �: %s \n", dia);
    printf("O dia � util?: %s \n", util);
    break;

    default:
        printf("Opera��o indisp�nivel");
        break;
    }

} 
