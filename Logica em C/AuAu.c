#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

int n1;
int n2;
int n3;
int maior;
int menor;

printf("Digite um n�mero: ");
scanf("%d", &n1);
printf("Digite um outro n�mero: ");
scanf("%d", &n2);
printf("Digite um outro n�mero: ");
scanf("%d", &n3);

system("cls || clear");

printf("Primeiro n�mero: %d \n", n1);
printf("Segundo n�mero: %d \n", n2);
printf("Terceiro n�mero: %d \n", n3);

if (n1 >= n2 && n1 >= n3)
{
    maior = n1;
}
else if (n2 >= n1 && n2 >= n3)
{
    maior = n2;
}
else if (n3 >= n2 && n1 <= n3)
{
    maior = n3;
}

if (n1 <= n2 && n1 <= n3)
{
    menor = n1;
}
else if (n2 <= n1 && n2 <= n3)
{
    menor = n2;
}
else if (n3 <= n2 && n3 <= n1)
{
    menor = n3;
}

printf("\n");
printf("Maior n�mero: %d \n", maior);
printf("Menor n�mero: %d \n", menor);

return 0;
}