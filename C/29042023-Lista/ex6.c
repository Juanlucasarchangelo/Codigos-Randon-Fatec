#include <stdio.h>
#include <stdlib.h>

int ler(int n[], int quantidade[]){

    int maior = 0, menor = 99999999, i;
    for (i = 0; i < quantidade; i++)
    {
        if(n[i] > maior){
            maior = n[i];
        }
        if(n[i] < menor){
            menor = n[i];
        }
    }

    printf("O maior valor foi: %d \n", maior);
    printf("O menor valor foi: %d \n", menor);

}

int main()
{
    int i, quantidade = 0;

    printf("Entre com a quantidade  de numeros: \n");
    scanf("%d", &quantidade);

    int n[quantidade];

    for(i = 1; i <= quantidade; i++ ){
        printf("Entre com o valor %d: \n", i);
        scanf("%d", &n[i - 1]);
    }

    ler(n, quantidade);

    return 0;
}
