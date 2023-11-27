#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct ficha_aluno
    {
        char nome[250];
        int idade;
        double nota[2];
    };

    int soma[2];
    double media[2];
    int i;
    int j;
    struct ficha_aluno aluno[2];

    for (i = 0; i < 2; i++)
    {

        fflush(stdin);

        printf("Escreva seu nome \n");
        gets(aluno[i].nome);

        printf("Sua idade \n");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Sua %d nota \n", j + 1);
            scanf("%lf", &aluno[i].nota[j]);

            soma[i] += aluno[i].nota[j];
        }
            media[i] = (double)soma[i] / 2;
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("Seu nome: %s \n", aluno[i].nome);

        printf("Sua idade: %d \n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Suas Notas: %.2f \n", aluno[i].nota[j]);
        }
        printf("Sua Media: %.2lf", media[i]);

        printf("\n");
    }
}