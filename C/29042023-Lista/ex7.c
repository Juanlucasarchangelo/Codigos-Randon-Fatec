#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somar(int a, int b, int c){

    float soma = 0;

    soma += pow(a, 2);
    soma += pow(b, 2);
    soma += pow(c, 2);


    printf("A soma total eh: %f \n", soma);

}

int main()
{
    int a, b, c;

    printf("Entre com o valor A: \n");
    scanf("%d", &a);
    printf("Entre com o valor B: \n");
    scanf("%d", &b);
    printf("Entre com o valor C: \n");
    scanf("%d", &c);

    somar(a, b, c);

    return 0;
}
