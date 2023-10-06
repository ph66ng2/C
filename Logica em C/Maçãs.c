#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");


    double precoMaca;
    double quantidadeMaca;
    double totalCompra;

    printf("Quantas maçãs serão compradas? \n");
    scanf("%lf", &quantidadeMaca);

    if (quantidadeMaca >= 12){
        precoMaca = 1.00;
        totalCompra = (precoMaca * quantidadeMaca);

    } else{
        precoMaca = 1.30;
        totalCompra = (precoMaca * quantidadeMaca);
    }

    system("cls");

    printf("Total de maaçãs compradas: %.0lf \n", quantidadeMaca);
    printf("Preço total da compra: R$%.2lf \n", totalCompra);

} 