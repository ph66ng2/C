#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct cadastro_Vetores
    {
    char nome[250];
    char dataAd[250];
    char matri[250];
    char endereco[250];
    char dataNasci[250];
    };

    int i;

int main(){

    struct cadastro_Vetores funcionario[3];

    struct cadastro_Vetores cliente[3];

        for ( i = 0; i < 3; i++)
        {
            
        printf("Nome do Cliente \n");
        gets(cliente[i].nome);

        printf("Data de adimissao do cliente \n");
        gets(cliente[i].dataAd);

        printf("Matricula do cliente \n");
        gets(cliente[i].matri);

        printf("Endereco do cliente \n");
        gets(cliente[i].endereco);

    
        }
        
        for (i = 0; i < 3; i++)
        {
            
        printf("Nome do funcionario \n");
        gets(funcionario[i].nome);

        printf("Data de nascimento do funcionario \n");
        gets(funcionario[i].dataNasci);

        printf("Endereco do funcionario \n");
        gets(funcionario[i].endereco);

         

        }
        

        system("cls");

        for (i = 0; i < 3; i++)
        {
            
        
        printf("Nome do Cliente: %s \n", cliente[i].nome);
        printf("Data de adimissao do Cliente: %s \n", cliente[i].dataAd);
        printf("Matricula do Cliente: %s \n", cliente[i].matri);
        printf("Endereco do Cliente: %s \n", cliente[i].endereco);

        printf("\n");
        }

        for (i = 0; i < 3; i++)
        {
            
        printf("\n");
        
        printf("Nome do Funcionario: %s \n", funcionario[i].nome);
        printf("Data de Nascimento do Funcionario: %s \n", funcionario[i].dataNasci);
        printf("Endereco do Funcionario: %s \n", funcionario[i].endereco);

        }

  
    






}