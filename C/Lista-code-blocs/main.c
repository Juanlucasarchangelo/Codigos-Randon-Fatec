#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int vetorA[10];
    float soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Entre com o %i valor; \n", i);
        scanf("%d", &vetorA[i]);
        printf(i);
    }

    return 0;
}
