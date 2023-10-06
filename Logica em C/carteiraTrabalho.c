#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    
    int anoIdade;
    int tempoDeTrabalho;
    char codigo [250];
    char resultado [240];

    printf("Escreva seu codigo \n");
    gets(codigo);

    printf("Qual em que ano voc� nasceu? \n");
    scanf("%d", &anoIdade);

    printf("Quanto anos de trabalho CLT? \n");
    scanf("%d", &tempoDeTrabalho);

    system("cls");

    int idade = 2023 - anoIdade;

    printf("Codigo: %s \n", codigo);
    printf("Idade: %d \n", idade);
    printf("Tempo de trabalho: %d \n", tempoDeTrabalho);


    if (anoIdade < 1958 || tempoDeTrabalho >= 30)
    {
       strcpy(resultado, "� possivel Aposentadoria \n");
    } else{
       strcpy(resultado, "N�o � possivel aposentadoria \n");   
    }

     printf("Resultado da consulta: %s \n", resultado);
}
