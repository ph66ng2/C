#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

struct info_Venda
{
    char nome [250];
    char autor [250];
    char categoria [250];
    double preco;
};

int i;

    struct info_Venda livro[3];

            for (i = 0; i < 3; i++)
            {
             printf("Escreva o nome do livro \n");
             gets(livro[i].autor);

             printf("Escreva o nome do autor \n");
             gets(livro[i].nome);

             printf("Qual a categoria do livro? \n");  
             gets(livro[i].categoria);

             printf("Qual o preço do livro? \n");  
             scanf("%lf", &livro[i].preco);

             fflush(stdin);
             
            }

            system("cls");

            printf("\n Monstrando dados \n");

            for (i = 0; i < 3; i++)
            {
                
             printf("Nome do Livro: %s \n", livro[i].autor);

             printf("\n");

             printf("Nome do Autor: %s \n", livro[i].nome);

             printf("\n");

             printf("Categoria: %s \n", livro[i].categoria);

             printf("\n");

             printf("Preço: R$%1.lf \n", livro[i].preco);  
             
            }
            




        












}