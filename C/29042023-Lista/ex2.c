#include <stdio.h>
#include <stdlib.h>

int somarIntervalo(int n1, int n2){

    int soma = 0, i;

    for(i = n1 + 1; i < n2; i++){
        printf("%d", i);
        soma += i;
    }

    printf("\nA soma total eh: %d \n", soma);

}

int main()
{
    int  n1, n2;
    
    printf("Entre com o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Entre com o segundo valor: \n");
    scanf("%d", &n2);

    somarIntervalo(n1, n2);

    return 0;
}
