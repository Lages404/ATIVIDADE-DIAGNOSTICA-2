#include <stdio.h>

int main()
{

    int soma = 0, l1 = 0, l2 = 0;

    while (soma <= 20)
    {
        printf("Informe o primeiro lado do dado: ");
        scanf("%d", &l1);
        printf("Informe o segundo lado do dado: ");
        scanf("%d", &l2);
        soma = l1 + l2;
        
        if(soma <= 20){
            printf("A soma dos lados e: %d\n Tente novamente!\n", soma);
        } else{
            printf("A soma dos lados e: %d\n Encerrando programa", soma);
        }
    }

    return 0;
}