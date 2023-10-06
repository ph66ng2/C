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

printf("Digite um número: ");
scanf("%d", &n1);
printf("Digite um outro número: ");
scanf("%d", &n2);
printf("Digite um outro número: ");
scanf("%d", &n3);

system("cls || clear");

printf("Primeiro número: %d \n", n1);
printf("Segundo número: %d \n", n2);
printf("Terceiro número: %d \n", n3);

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
printf("Maior número: %d \n", maior);
printf("Menor número: %d \n", menor);

return 0;
}