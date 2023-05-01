#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float nota1, float nota2, float nota3, char s){

    float mediaAritmetica = 0, mediaPonderada = 0;

    if(s == 'a' || s == 'A'){
        // printf("%f, %f, %f", nota1, nota2, nota3);
        mediaAritmetica = (nota1 + nota2 + nota3) / 3; 
        printf("A media eh: %f \n", mediaAritmetica);
    } else if (s == 'p' || s == 'P') {
        mediaPonderada = (nota1 * 2 + nota2 * 4 + nota3 * 6) / (2 + 4 + 6);
        printf("A media ponderada eh: %f", mediaPonderada);
    } else {
        printf("Opcao selecionada eh invalida!!");
    }
}

int main()
{
    float nota1, nota2, nota3;
    char s;

    printf("Entre com a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota: \n");
    scanf("%f", &nota3);
    printf("Entre com A (Aritmetica) ou P (Ponderada): \n");
    scanf("%s", &s);

    calcularMedia(nota1, nota2, nota3, s);

    return 0;
}
