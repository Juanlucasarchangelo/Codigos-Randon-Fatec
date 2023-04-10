#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float vetorNota[15], media = 0;
    int i, count = 0, soma = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Entre com a %iº nota: \n", i);
        scanf("%d", &vetorNota[i]);
        soma += vetorNota[i];
        count++;
    }

    printf("As medias das notas foram: %lf \n", media = soma / count);

    return 0;
}