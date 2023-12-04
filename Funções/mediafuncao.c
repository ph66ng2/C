#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int somar(int a , int b){
        int soma;
    
        soma = b + a;

        return soma;
}

double mediana(int a, int b){

        double media;

        media = (a + b) / (double) 2;

        return media;
}

void telaLimpada(){

    system("cls");
}


void peppa(){

    printf("*****************\n");
    printf("To travado na frente dos peppa\n");
    printf("*****************\n");
}

int main(){


    int n1, n2;
    int soma = 0;
    double media;

    peppa();
    printf("Primeiro Numero \n");
    scanf("%d", &n1);


    printf("Segundo Numero \n");
    scanf("%d", &n2);


    soma = somar(n1, n2);

    media = mediana(n1, n2);
    
    

        telaLimpada();

    peppa();
    
    printf("Soma = %d \n", soma);
    printf("Media = %1.lf \n", media);
        


    return 0;
}