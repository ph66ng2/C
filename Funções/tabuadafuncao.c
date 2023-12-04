#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void mostrarTabuada(int a){
    
    int i;

    for (i = 0; i < 10; i++)
    {

        printf("%d x %d = %d \n", a, i+1, a * (i+1));
        

    }
    
}


int main(){


    int n;
    int i;

    printf("Digite um numero \n");
    scanf("%d", &n);

    mostrarTabuada(n);

    
    
    
    
        


    return 0;
}