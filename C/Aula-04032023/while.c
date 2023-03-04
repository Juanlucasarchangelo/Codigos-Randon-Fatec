#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int x, soma = 0;
    
    do
    {
        printf("Entre com um número: \n");
        scanf("%d", &x);

        if (x > 0 && x < 20 )
        {
            if(soma+x > 100){
                break;
            }
            printf("Soma: %d \n", soma += x);
        } else {
            printf("Número inválido! \n");
        }

    } while (soma <= 100);

    printf("O valor chegou a %d", soma);
}