#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5];
    int somaImpar = 0, somaPar = 0, total = 0, i = 0;

    for (i; i < 5; i++){
        printf("Entre com o %dº número: ", i);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            somaPar += vetor[i];
        } else {
            somaImpar += vetor[i];
        }
        
        total += vetor[i];
    }

    // Calculando a porcentagem de números ímpares em relação aos pares
    float porcentagem_impar;

    if (somaPar == 0) {
        porcentagem_impar = 100.0;
    } else {
        porcentagem_impar = 100.0 * somaImpar / somaPar;
    }

    printf("%lf", porcentagem_impar);

    return 0;
}
