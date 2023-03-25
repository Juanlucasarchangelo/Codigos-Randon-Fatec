#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main()
{
    int n;
    printf("Digite um valor interito positivo: \n");
    scanf("%d", &n);
    printf("Resultado: %d \n", absoluto(n));
    return 0;
}
