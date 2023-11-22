#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

int i;
int j;
char banda [2][250];
char componentes [2][2][200];

for ( i = 0; i < 2; i++)
{
    printf("Diga o nome da banda");
    gets(banda[i]);


        for (j = 0; j < 2; j++)
        {
            printf("Escreva os componentes");
            gets(componentes[i][j]);
        }

    fflush(stdin);

}

    fflush(stdin);


    for (i = 0; i < 2; i++)
    {
        printf("\n Bandas: %s\n", banda[i]);

        printf("\n Componentes: %s \n", componentes[i][j]);
    }
    
    
}



