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

    printf("Qual � o valor do Produto? \n");
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
        do
        {
            printf("Num�ro de parcelas \n");
            scanf("%d", &parcelas);
            

            if (parcelas > 6)
            {
                printf("Parcelas Indisponiv�is \n");
                break;
            }

        } while (parcelas > 6);
        {

            printf("Valor do Produto: R$%.lf \n", valor);

            printf("Numero de parcelas: %d \n", parcelas);

            double valorParcelas = valor / parcelas;
            printf("Valor Mensal: %.1lf \n", valorParcelas);
            break;
        }
         default:
            break;
       }

return 0;
}
