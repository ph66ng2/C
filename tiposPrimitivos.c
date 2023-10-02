#include <stdio.h>
#include <stdlib.h>


// shift + alt vc copia e cola rapidinho

int main()
{
    int idade; 
    float peso;
    char sexo;
    char nome [250];

    printf("Digite sua idade: ");
    scanf("%d" ,&idade);

    printf("Digite seu peso: ");
    scanf("%f" ,&peso);

    fflush(stdin); 

    printf("Digite seu sexo: ");
    scanf("%c" ,&sexo);

    fflush(stdin);


    printf("Digite seu nome: ");
    scanf("%s" ,&nome);

    //
        printf("Idade: %d \n", idade);
        printf("Peso: %.1f \n", peso);
        printf("Sexo: %c \n", sexo);
        printf("Sexo: %s \n", nome);

            return 0;
}

