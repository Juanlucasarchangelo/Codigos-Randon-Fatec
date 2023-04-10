#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Entre com o %iº valor do vetor A: \n", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nConteudos dos vetores A e B invertidos: \n");
    for(i = 9; i >= 0; i--) {
        printf("vetorA[%d] = %d\n", i, vetorA[i]);
    }

    return 0;
}