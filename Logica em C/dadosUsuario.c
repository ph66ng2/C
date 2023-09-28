#include <stdio.h>
#include <stdlib.h>


int main()
{
    int idade;
    float altura;
    float peso;
    char sexo;
    char nome[250];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin);

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Digite seu nome: ");
    gets(nome);

    system("cls");

    fflush(stdin);

    printf("Idade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Peso: %.1f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}
