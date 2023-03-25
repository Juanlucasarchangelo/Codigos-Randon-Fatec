#include <stdio.h>
#include <stdlib.h>
#include "funcoes\calculadora.h"

int main()
{
    int  a, b;

    int opcao;

    do{
        montar_menu();
        scanf("%d", &opcao);
        a = ler_dado();
        b = ler_dado();

        switch (opcao)
        {
            case 1:
                printf("Soma: %d \n", soma(a, b));
                break;
            case 2:
                printf("Soma: %d \n", subtrair(a, b));
                break;
            case 3:
                printf("Soma: %d \n", multiplicar(a, b));
                break;
            case 4:
                printf("Soma: %d \n", dividir(a, b));
                break;
            case 9:
                break;
            default:
                printf("Número inválido!\n");
                break;
        }
    }while(opcao!=9);
    return 0;
}
