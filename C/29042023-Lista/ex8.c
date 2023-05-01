#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int validarData(int dia, int mes, int ano){
    int verifica = 0;

    int bissexto = (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));

    if (mes < 1 || mes > 12) {
        printf("0");
        exit;
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia < 1 || dia > 30){
            printf("0");
            verifica = 1;
            exit;
        }
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes ==10 || mes == 12){
        if(dia < 1 || dia > 31){
            printf("0");
            verifica = 1;
            exit;
        }
    } else if (mes == 2){
        if(bissexto) {
            if (dia > 29) {
                printf("0");
                verifica = 1;
                exit;
            }
        } else {
            if (dia > 28) {
                printf("0");
                verifica = 1;
                exit;
            }
        }
    }
    if(verifica != 1){
        printf("1");
    }
}

int main()
{
    int dia, mes, ano;

    printf("Entre com o dia: \n");
    scanf("%d", &dia);
    printf("Entre com o mes: \n");
    scanf("%d", &mes);
    printf("Entre com o ano: \n");
    scanf("%d", &ano);


    validarData(dia, mes, ano);

}
