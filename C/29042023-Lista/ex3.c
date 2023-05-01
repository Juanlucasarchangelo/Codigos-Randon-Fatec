#include <stdio.h>
#include <stdlib.h>

int somarIntervalorDivisiveis(int a, int b, int c){

    int soma = 0, i;

    for(i = b; i <= c; i++){
        if(i % a == 0){
            printf("%d", i);
            soma += i;
        }
    }

    printf("\nA soma total eh: %d \n", soma);

}

int main()
{
    int  a, b, c;
    do{
        printf("Entre com o valor A maior que 1: \n");
        scanf("%d", &a);
        printf("Entre com o valor B: \n");
        scanf("%d", &b);
        printf("Entre com o valor C: \n");
        scanf("%d", &c);
    } while (a < 2);

    somarIntervalorDivisiveis(a, b, c);

    return 0;
}
