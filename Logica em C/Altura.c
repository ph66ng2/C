#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char sexo;
    double altura;
    
    
    
    // Ele pede o Sexo do usuario
    printf("Qual seu sexo? \n");
    printf("M - para Masculino \n");
    printf("F - para Feminino \n");
    scanf("%c", &sexo);

    system("cls");

    sexo = toupper(sexo);

    switch (sexo)

    {

    // Caso seja Homem    
    case 'M':
            

            // Algoritimo pede a Altura do individuo
            printf("Escreva sua Altura \n");
            scanf("%lf", &altura);

            // Usa a Altura para fazer a operação
            double mediaM = (72.7 * altura) - 58;


            // Algoritimo mostra o peso ideal
            printf("Seu peso ideal é: %.1lf \n", mediaM);
        break;

    // Caso seja Mulher
    case 'F':


            // Algoritimo pede a Altura do individuo
            printf("Escreva sua Altura \n");
            scanf("%lf", &altura);


            // Usa a Altura para fazer a operação
            double mediaF = (62.1 * altura) - 44.7;


            // Algoritimo mostra o peso ideal
            printf("Seu peso ideal é: %.1lf \n", mediaF);

        break;
    
    default:
        printf("Operação Inexistente \n");
        break;
    }

    return 0;

    

} 