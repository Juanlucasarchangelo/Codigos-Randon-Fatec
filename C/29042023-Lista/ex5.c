#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float notas[], float pesos[]){

    float mediaPonderada = 0;
    int i;

    // for(i = 0; i < 3; i++{
    //     printf("%f", notas[i]);
    // }

    // for(i = 0; i < 3; i++{
    //     printf("%f", pesos[i]);
    // }

    mediaPonderada = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2]  * pesos[2]) / (pesos[0] + pesos[1] + pesos[2]);
    printf("A media ponderada eh: %f", mediaPonderada);
}

int main()
{
    int qtdePeso = 0, i;

    printf("Qual a quantidade de notas: \n");
    scanf("%d", &qtdePeso);

    float notas[qtdePeso], pesos[qtdePeso];

    for (i = 1; i <= qtdePeso; i++)
    {
        printf("Entre com a nota %d: \n", i);
        scanf("%f", &notas[i - 1]);
    }
    
    for (i = 1; i <= qtdePeso; i++)
    {
        printf("Entre com o peso da nota %d: \n", i);
        scanf("%f", &pesos[i - 1]);
    }

    calcularMedia(notas, pesos);

    return 0;
}
