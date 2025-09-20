#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int chute, n = rand() % 50 + 1;

    do
    {

        printf("Informe um numero entre 1 e 50: ");
        scanf("%d", &chute);

        if (chute < n)
        {
            printf("Tente um numero maior!\n");
        }
        else if (chute > n)
        {
            printf("Tente um numero menor!\n");
        }
        else
        {
            printf("Parabens voce acertou!\nO numero era: %d\n", n);
        }
    } while (chute != n);

    return 0;
}