 #include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, salarioFinal;
    char estado;
    
    printf("Entre com seu salario: \n");
    scanf("%d", &salario);
    printf("Entre com seu Estado Civil: \n");
    estado = getchar();

    estado == "s"? salarioFinal = salario * 0.1 : salarioFinal = salario * 0.09;

    return 0;
}
