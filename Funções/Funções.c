#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void telaLimpada(){

    system("cls");
}


void peppa (){

    printf("*****************\n");
    printf("To travado na frente dos peppa\n");
    printf("*****************\n");
}

int main(){


    char nome[250];
    int idade;

    peppa();
    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o sua idade: ");
    scanf("%d", &idade);

        telaLimpada();

    peppa();
    printf("Idade: %d \n", idade);
    printf("Nome: %s \n", nome);
    


    return 0;
}