#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char prato [250];
    int codigo;
    double valor;




    printf("Escreva o prato que você deseja: \n");
    scanf("%d", &codigo);


    switch (codigo)
    {
    case 1:
        valor = 25.00;
        strcpy(prato, "Picanha");
        break;

    case 2:
        valor = 20.00;
        strcpy(prato, "Lasanha");
        break;
    
    case 3:
        valor = 18.00;
        strcpy(prato, "Strogonoff");
        break;
    
    case 4:
        valor = 15.00;
        strcpy(prato, "Bife Acebolado");
        break;
    
    case 5:
        valor = 5.00;
        strcpy(prato, "Pão com ovo");
        break;
    
    default:
        printf("Prato Inexistente");
        break;
    }


    printf("Codigo: %d \n", codigo);
    printf("Prato: %s \n", prato);
    printf("Valor: R$%.2lf \n", valor);

    return 0;

} 
