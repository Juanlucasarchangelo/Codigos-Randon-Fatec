#include <stdio.h>
#include <stdlib.h>
#include "funcoes\calculadora.h"

void montar_menu(){
    printf("Menu Principal \n");
    printf("1. Somar \n");
    printf("2. Substrair \n");
    printf("3. Multiplicar \n");
    printf("4. Dividir \n");
    printf("9. Sair \n");
    printf("Escolha sua opcao: ");
}

int ler_dado(){
    int x;
    printf("Digite um valor inteiro: \n ");
    scanf("%d", &x);
    return x;
}

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if(b){
        return  a / b;
    }else{
        printf("Problemas. Não pode divir por zero\n");
        exit(1);
    }
}
