#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int data;
    char med [250];

    printf("Escreva o número do Mês \n");
    scanf("%d", &data);



    switch (data)
    {
    case 1:
        strcpy(med, "Janeiro");
        printf("O mês é: %s \n", med);
        break;
    case 2:
        strcpy(med, "Fevereiro");
        printf("O mês é: %s", med);
        break;
    case 3:
        med == "Março";
        printf("O mês é: %s", med);
        break;
    case 4:
        med == "Abril";
        printf("O mês é: %s", med);
        break;
    case 5: 
        med == "Maio";
        printf("O mês é: %s", med);
        break;
    case 6:
        med == "Junho";
        printf("O mês é: %s", med);
        break;
    case 7:
        med == "Julho";
        printf("O mês é: %s", med);
        break;
    case 8:
        med == "Agosto";
        printf("O mês é: %s", med);
        break;
    case 9:
        med == "Setembro";
        printf("O mês é: %s", med);
        break;
    case 10: 
        med == "Outubro";
        printf("O mês é: %s", med);
        break;
    case 11:
        med == "Novembro";
        printf("O mês é: %s", med);
        break;
    case 12
        med == "Dezembro";
        printf("O mês é: %s", med);
        break;
    default:
        printf("Operação Invalida")
        break;
    }

    return 0;

} 