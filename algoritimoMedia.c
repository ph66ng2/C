#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    int n1; 
    int n2;

    printf("Primeiro n�mero: \n");
        scanf("%d", &n1);

    printf("Segundo n�mero: \n");
        scanf("%d", &n2);


      float soma = n1 + n2; 
      float media = (soma) / 2;
      float produto = (n1 * n2);


    system("cls");

    
      if (n1 > n2)
      {
        printf("O Primero n�mero � maior que o Segundo. \n");
      }
      else if (n1 < n2)
      {
        printf("O Segundo n�mero � maior que o Primeiro. \n");
      } 
      else if (n1 == n2)
      {
        printf("Os n�meros s�o iguais. \n");
      }
      
      printf("Media: %.1f \n", media);

      printf("Produto: %.1f \n", produto);

      printf("Soma: %.0f \n", soma);

      return 0;  
}