#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1; 
    
    float nota2;

    printf("Primeira Nota: ");
        scanf("%f", &nota1);

    printf("Segunda Nota: ");
        scanf("%f", &nota2);

      float soma = nota1 + nota2;
      float media = soma / 2;

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
      

      printf("Media: %.1f \n", media);

      return 0;  
}