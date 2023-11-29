#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct rg_E_Cpf
    {
    char nome[250];
    int anoNascenca;
    int rg;
    int cpf;
    };

int main(){

    int i;

    struct rg_E_Cpf cadastro[2];


        for (i = 0; i < 2; i++)
        {
            printf("Digite seu nome \n");
            gets(cadastro[i].nome);

            printf("Digite o ano que voce nasceu \n");
            scanf("%d", &cadastro[i].anoNascenca);

            printf("Digite o seu RG \n");
            scanf("%d", &cadastro[i].rg);

            printf("Digite o seu CPF \n");
            scanf("%d", &cadastro[i].cpf);

            fflush(stdin);
            
        }


        system("cls");



        for (i = 0; i < 2; i++)
        {
            printf("Nome: %s \n", cadastro[i].nome);

            printf("Ano de nascimento: %d \n", cadastro[i].anoNascenca);

            printf("RG: %d \n", cadastro[i].rg);

            printf("CPF: %d \n", cadastro[i].cpf);
        }
        


    
    


}