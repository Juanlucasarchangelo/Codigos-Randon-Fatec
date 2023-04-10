#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10], vetorB[10];
    int i = 0;

    for (i; i < 10; i++)
    {
        printf("Entre com o %iº valor do vetor A: \n", i);
        scanf("%d", &vetorA[i]);

        if (vetorA[i % 2 == 0])
        {
            vetorB[i] = vetorA[i] * 5;
        } else{
            vetorB[i] = vetorA[i] + 5;
        }
    }

    printf("\nConteudos dos vetores A e B invertidos: \n");
    for(i = 9; i >= 0; i--) {
        printf("vetorA[%d] = %d\n", i, vetorA[i]);
    }

    printf("\n");
    for(i = 9; i >= 0; i--) {
        printf("vetorB[%d] = %d\n", i, vetorB[i]);
    }

    return 0;
}