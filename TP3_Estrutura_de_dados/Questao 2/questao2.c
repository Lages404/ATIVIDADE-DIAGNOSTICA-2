#include <stdio.h>

int main()
{

    int n, i, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        soma = soma + i * i;
    }
  printf("A soma dos quadrados dos primeiros %d numeros e: %d", n, soma);
        return 0;  
}