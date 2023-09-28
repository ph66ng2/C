#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1; 
    int idade;
    char nome [250]; 
    float nota2;
    float nota3;

    printf("Seu Nome: ");
       gets(nome);

    printf("Sua Idade: ");
        scanf("%d", &idade);

    printf("Primeira Nota: ");
        scanf("%f", &nota1);

    printf("Segunda Nota: ");
        scanf("%f", &nota2);

    printf("Terceira Nota: ");
        scanf("%f", &nota3);

      float soma = nota1 + nota2 + nota3; 
      float media = soma / 3;

      if (media >= 7)
      {
        printf("Passou de ano \n");
      }
      else if (media < 7 && media >= 5)
      {
        printf("Recuperacao \n");
      }
      else if (media < 5){

        printf("Reprovado \n");
      }
      
      system("cls");
      
      printf("Media: %.1f \n", media);

      printf("Nome: %s \n", nome);

      printf("Idade: %d \n", idade);

      return 0;  
}