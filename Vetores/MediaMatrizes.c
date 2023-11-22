#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

int i;
int j;
double media[3];
double soma = 0;
char disciplina[3][250];
double nota[3][3];




for ( i = 0; i < 3; i++)
{
    printf("Diga o nome da disciplina \n");
    gets(disciplina[i]);


        for (j = 0; j < 3; j++)
        {
            printf("\n Digite a nota \n");
            scanf("%lf", &nota[i][j]);


            soma = (nota[i][j] * 3) + (nota[i][j] * 3) + (nota[i][j] * 4); 
        }

        media[i] = soma / 10;

        soma = 0;

        fflush(stdin); 
        
}

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("\n Diciplina: %s", disciplina[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("\n Nota: %1.lf \n", nota[i][j]);
        }

        printf("\n Media: %0.lf", media[i]);
        
    }
    

    
}



