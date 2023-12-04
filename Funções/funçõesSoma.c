#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int somar(int a , int b){
        int soma;
    
        soma = b + a;

        return soma;
}

void telaLimpada(){

    system("cls");
}


void peppa (){

    printf("*****************\n");
    printf("To travado na frente dos peppa\n");
    printf("*****************\n");
}

int main(){


    int n1, n2;
    int i;
    int soma = 0;

    peppa();
    printf("Primeiro Numero");
    scanf("%d", &n1);


    printf("Segundo Numero \n");
    scanf("%d", &n2);


    soma = somar(n1, n2);
    
    

        telaLimpada();

    peppa();
    
    printf("Soma = %d \n", soma);
        


    return 0;
}