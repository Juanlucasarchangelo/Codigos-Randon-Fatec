#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salMulher, impostoM, impostoH, salHomen;
    char sexo;

    printf("Qual seu sexo: \n");
    sexo = getchar();

    switch (sexo)
    {
    case 'm':
    case 'M':
        printf("Qual seu salário: \n");
        scanf("%lf", &salMulher);
        printf("O total de imposto a paguar é: %lf", impostoM = salMulher * 0.1);

    case 'h':
    case 'H':
        printf("Qual seu salário: \n");
        scanf("%lf", &salHomen);
        printf("O total de imposto a paguar é: %lf", impostoH = salMulher * 0.15);
    
    default:
        printf("Opção inválida! Digite H\h para Homem, ou M\m para Mulher");
        break;
    }

    return 0;
}
