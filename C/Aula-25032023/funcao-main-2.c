#include <stdio.h>
#include <stdlib.h>

double imc (double peso, double altura)
{
    return peso / (altura * altura);
}

int main()
{
    double h, p;
    printf("Entre com a altrua da pessoa: \n");
    scanf("%lf", &h);
    printf("Entre com o peso da pessoa: \n");
    scanf("%lf", &p);

    printf("O IMC da pessoa é: %2lf", imc(p, h));
    return 0;
}