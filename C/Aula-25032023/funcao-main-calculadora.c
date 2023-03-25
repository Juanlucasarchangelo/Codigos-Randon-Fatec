#include <stdio.h>
#include <locale.h>
#include "calculadora.c"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    int opcao;
    do{
        montar_menu();
        scanf("%d", &opcao);
        if(opcao>=1 && opcao<=4){
            a = ler_dado();
            b = ler_dado();
        }
        switch (opcao) {
            case 1:
                printf("Soma: %d \n", somar(a, b));
                break;
            case 2:
                printf("Subtração: %d \n", subtrair(a, b));
                break;
            case 3:
                printf("Multiplicação: %d \n", multiplicar(a,b));
                break;
            case 4:
                printf("Divisao: %d \n", dividir(a, b));
                break;
            case 9:
                printf("FIM \n");
                break;
            default:
                printf("Opção inválida \n");
        }
    }while(opcao!=9);
    return 0;
}
