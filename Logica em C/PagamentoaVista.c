#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    double valor;
    int pagamento;
    int parcelas;
    


    printf("Qual é o valor do Produto? \n");
    scanf("%lf", &valor);

    double desconto = (valor * 10) / 100;
    

    printf("1 - Pagamento a Vista \n");
    printf("2 - Pagamento Parcelado \n");
    scanf("%d", &pagamento);

    switch (pagamento)
    {
    case 1:
        

        printf("Valor do produto: R$%.1lf \n", valor);
        printf("Valor do desconto: R$%.1lf \n", desconto);

        double valorDesconto = valor - desconto; 
        printf("Valor Total: R$%.1lf \n", valorDesconto); 
        break;
    case 2:
            printf("Numéro de parcelas \n");
            scanf("%d", &parcelas);
            double juros = (parcelas + 5) /100;
        if (parcelas <= 6)
        {
            printf("Valor do Produto: R$%.lf \n", valor);

            printf("Valor dos Juros:  %.1lf \n", juros);

            printf("Numero de parcelas: %d \n", parcelas);

            double valorJuros = valor * juros;
            printf("Valor Total: R$%.1lf \n", valorJuros);

            double valorParcelas = valorJuros / parcelas;
            printf("Valor Mensal: %.1lf \n", valorParcelas);
        }
        else
        {
            
            printf("Parcelas Indisponivéis \n");
            break;
        }
    default:
        break;
    }

    return 0;
}
